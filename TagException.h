#pragma once

#include <exception>
#include <string>
#include "Tag.h"

namespace TAG {



	class TagException : public std::exception {

	public:


		explicit TagException(TAG::Tag& tag);

		virtual const char* what() const noexcept override;
		


	private:

		std::string message;



	};


}

