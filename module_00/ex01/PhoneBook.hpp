#ifndef PHONEBOOK
#define PHONEBOOK
#include "Contact.hpp"
#include <iostream>
#include <cmath>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void Add();
		void Search();
	private:
		int			current;
		Contacts	contacts[8];
};

#endif