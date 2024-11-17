#include "TAGEXCEPTION.h"



namespace TAG {

	

	TagException::TagException(TAG::Tag& referencedTag) {

		

		switch (referencedTag.GetState()) {

			case TAG::Tag::STATES::OPEN_BRACKET:




				break;


			default:
				break;
		}
		

	}

	const char* TagException::what() const noexcept {
		return nullptr;
	}

}






