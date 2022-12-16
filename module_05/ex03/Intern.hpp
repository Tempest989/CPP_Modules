#ifndef INTERN
#define INTERN

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &input);
		Intern &operator=(Intern const &input);

		Form	*makeForm(std::string const &type, std::string const &input);

		class UnknownFormException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Intern: Unable to Create a Form of an Unknown Type.");
				}
		};
};

#endif