#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string input;
	while (true)
	{
		std::cout << "Command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
			book.Add();
		else if (input.compare("SEARCH") == 0)
			book.Search();
		else if (input.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Invalid Command, Please Give a Valid " << std::endl;
	}
	return (0);
}
