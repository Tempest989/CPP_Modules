#ifndef CONTACT
#define CONTACT
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif