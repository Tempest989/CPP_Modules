#include "Form.hpp"

Form::Form() : name("Default"), target("Default"), sign_min(150), sign_exe(150)
{
	std::cout << "Form Default constructor called" << std::endl;
	this->been_signed = false;
}

Form::Form(const Form &input) : name(input.getName()), target(input.getTarget()), sign_min(input.getSignMin()), sign_exe(input.getSignExecute())
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = input;
}

Form::Form(std::string const input, std::string const spotted, unsigned int min, unsigned int exe) : name(input), target(spotted), sign_min(min), sign_exe(exe)
{
	std::cout << "Form string & int custom constructor called" << std::endl;
	if (min < 1 || exe < 1)
		throw Form::GradeTooHighException();
	else if (min > 150 || exe > 150)
		throw Form::GradeTooLowException();
	this->been_signed = false;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form &Form::operator=(Form const &input)
{
	std::cout << "Form Copy Assignment operator called" << std::endl;
	this->been_signed = input.getBeenSign();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &input)
{
	out << input.getName() << ", form grade minimum " << input.getSignMin() << ", form target " << input.getTarget() << ", form grade execute " << input.getSignExecute() << ", form been signed " << input.getBeenSign() << "." << std::endl;
	return (out);
}

std::string const	Form::getName() const
{
	return (this->name);
}

std::string const	Form::getTarget() const
{
	return (this->target);
}

unsigned int	Form::getSignMin() const
{
	return (this->sign_min);
}

unsigned int	Form::getSignExecute() const
{
	return (this->sign_exe);
}

bool	Form::getBeenSign() const
{
	return (this->been_signed);
}

void	Form::beSigned(Bureaucrat const &input)
{
	if (input.getGrade() <= this->sign_min)
		this->been_signed = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->been_signed == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->sign_exe)
		throw Form::GradeTooLowException();
}
