#include "check_error.h"


error_message::error_message(const std::string& message) : message{ message }
{
	this -> message = message;
}

const char* error_message::what() const noexcept
{ 
	return message.c_str();									// получаем из std::string строку const char*
}
 