#pragma once


#include <iostream>
#include <string>
#include "TagException.h"

namespace TAG {



	class Tag {

	protected:

		enum STATES {

			BEGIN, // Initial state
			OPEN_BRACKET,
			CONTENT,
			CLOSE_BRACKET

		};

		STATES state;






	public:

		std::string content; // Content of entire the tag
		std::string tagText; // Full tag text
		Tag* parent;
		Tag* sibling;
		Tag* child;






		// Receiving text as an input
		Tag(std::string text);


		void ParseTag(std::string text);

		// Set new state, based on state variable
		void SetState();
		STATES GetState();




	};


}