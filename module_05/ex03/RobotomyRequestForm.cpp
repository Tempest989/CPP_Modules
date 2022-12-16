#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", "Default", 72, 45)
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &input) : Form(input.getName(), input.getTarget(), input.getSignMin(), input.getSignExecute())
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = input;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const input) : Form("RobotomyRequestForm", input, 72, 45)
{
	std::cout << "RobotomyRequestForm string custom constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &input)
{
	std::cout << "RobotomyRequestForm Copy Assignment operator called" << std::endl;
	this->Form::operator=(input);
	return (*this);
}

void	RobotomyRequestForm::run_execute(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::cout << "***Drilling Noises***" << std::endl << "***Drilling Noises***" << std::endl << "***Drilling Noises***" << std::endl;
	if (std::rand() % 2)
		std::cout << this->getTarget() << " has been robotomized!" << std::endl;
	else
		std::cout << "robotomy has failed!" << std::endl;
}
