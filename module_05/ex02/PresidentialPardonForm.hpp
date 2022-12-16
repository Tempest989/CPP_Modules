#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &input);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &input);
		PresidentialPardonForm(std::string const input);

		void	run_execute(Bureaucrat const &executor) const;
};

#endif