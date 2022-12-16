#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice &input) : AMateria(input)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = input;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &input)
{
	std::cout << "Ice Copy Assignment operator called" << std::endl;
	this->AMateria::operator=(input);
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &input)
{
	std::cout << "* shoots an ice bolt at " << input.getName() << " *" << std::endl;
}
