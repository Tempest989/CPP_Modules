#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default")
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &input) : name(input.getName())
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
