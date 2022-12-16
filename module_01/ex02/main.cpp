#include <iostream>
#include <string>

int main()
{
	std::string	output = "HI THIS IS BRAIN";
	std::string	*stringPTR = &output;
	std::string	&stringREF = output;

	std::cout << "Memory address output: " << &output << std::endl;
	std::cout << "Memory address stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory address stringREF: " << &stringREF << std::endl;

	std::cout << "Value output: " << output << std::endl;
	std::cout << "Value stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value stringREF: " << stringREF << std::endl;
	return (0);
}