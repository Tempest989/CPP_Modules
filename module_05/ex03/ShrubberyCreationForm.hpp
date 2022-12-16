#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &input);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &input);
		ShrubberyCreationForm(std::string const input);

		void	run_execute(Bureaucrat const &executor) const;
};

#endif