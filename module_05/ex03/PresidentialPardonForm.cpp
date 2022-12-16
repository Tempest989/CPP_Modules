#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", "Default", 25, 5)
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &input) : Form(input.getName(), input.getTarget(), input.getSignMin(), input.getSignExecute())
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = input;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const input) : Form("PresidentialPardonForm", input, 25, 5)
{
	std::cout << "PresidentialPardonForm string custom constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &input)
{
	std::cout << "PresidentialPardonForm Copy Assignment operator called" << std::endl;
	this->Form::operator=(input);
	return (*this);
}

void	PresidentialPardonForm::run_execute(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
