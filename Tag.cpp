	#include "TAG.h"

	namespace TAG {


		Tag::Tag(std::string text) {

			this->state = BEGIN;



		}

		void Tag::ParseTag(std::string text) {

			for (char c : text) {

				this->content.push_back(c);

				switch (state) {
					case Tag::BEGIN:

						if (c != '<') {
							// parse error!!
							throw TAG::TagException::TagException(*this);
						}

						
						SetState();
						break;
					case Tag::OPEN_BRACKET:


						if (c == '<') throw TAG::TagException(*this);
						else if (c == '>') {
							SetState();
							break;
						}

						
						break;
					case Tag::CONTENT:

						if (c == '<' ) throw TAG::TagException::TagException(*this);
						else if (c == '>') {

						}

						this->tagText.push_back(c);


						break;
					case Tag::CLOSE_BRACKET:
						break;
					default:
						break;
				}


				



			}
		}


		void Tag::SetState() {

			switch (this->GetState()) {

				case BEGIN:
					this->state = OPEN_BRACKET;
					break;

				case OPEN_BRACKET:
					this->state = CONTENT;


				default:
					break;
			}


		}

		Tag::STATES Tag::GetState() {
			return this->state();
		}



	}