#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern &input)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = input;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

Intern &Intern::operator=(Intern const &input)
{
	std::cout << "Intern Copy Assignment operator called" << std::endl;
	(void)input;
	return (*this);
}

Form	*Intern::makeForm(std::string const &type, std::string const &input)
{
	const std::string form_check[12] = {"Shrubbery", "shrubbery", "Creation", "creation", "Robotomy", "robotomy", "Request", "request", "Presidential", "presidential", "Pardon", "pardon"};
	int track = 0;
	for ( ; track < 9; track += 4)
	{
		if ((type.find(form_check[track]) != std::string::npos || type.find(form_check[track + 1]) != std::string::npos) && (type.find(form_check[track + 2]) != std::string::npos || type.find(form_check[track + 3]) != std::string::npos))
			break;
	}
	switch (track)
	{
		case 0:
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			return (new ShrubberyCreationForm(input));
		case 4:
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(input));
		case 8:
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(input));
		default:
			throw Intern::UnknownFormException();
	}
}

