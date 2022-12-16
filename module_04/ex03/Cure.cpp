#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure &input) : AMateria(input)
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = input;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &input)
{
	std::cout << "Cure Copy Assignment operator called" << std::endl;
	this->AMateria::operator=(input);
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &input)
{
	std::cout << "* heals " << input.getName() << "'s wounds *" << std::endl;
}
