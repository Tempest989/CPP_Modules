#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Default")
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &input)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = input;
}

Bureaucrat::Bureaucrat(std::string const input, unsigned int mark) : name(input)
{
	std::cout << "Bureaucrat string & int custom constructor called" << std::endl;
	if (mark < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (mark > 150)
		throw Bureaucrat::GradeTooLowException();	
	this->grade = mark;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &input)
{
	std::cout << "Bureaucrat Copy Assignment operator called" << std::endl;
	if (input.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (input.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = input.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &input)
{
	out << input.getName() << ", bureaucrat grade " << input.getGrade() << "." << std::endl;
	return (out);
}

std::string const	Bureaucrat::getName() const
{
	return (this->name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

//std::cout << "Unable to Increase Grade, " << this->name << " is Already has the Highest Grades Possible!" << std::endl;
void	Bureaucrat::gradePlus(unsigned int input)
{
	if (this->grade - input < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= input;
}

//std::cout << "Unable to Decrease Grade, " << this->name << " is Already has the Lowest Grades Possible!" << std::endl;
void	Bureaucrat::gradeMinus(unsigned int input)
{
	if (this->grade + input > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += input;
}

void	Bureaucrat::signForm(Form &input) const
{
	if (input.getBeenSign() == true)
	{
		std::cout << this->name << " couldn't sign " << input.getName() << " because it was already signed!" << std::endl;
		return;
	}
	try
	{
		input.beSigned(*this);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << this->name << " couldn't sign " << input.getName() << " because their grade was too low to sign the form!" << std::endl;
	}
	if (input.getBeenSign() == true)
		std::cout << this->name << " signed " << input.getName() << std::endl;
}

void	Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		form.run_execute(*this);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << this->name << " couldn't execute " << form.getName() << " because ";
		if (form.getBeenSign() == false)
			std::cout << "the form has not been signed yet!" << std::endl;
		else
			std::cout << "their grade was too low to sign the form!" << std::endl;
	}
}
