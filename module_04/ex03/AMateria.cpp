#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called" << std::endl;
	this->type = "Default";
}

AMateria::AMateria(const AMateria &input)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = input;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &input)
{
	std::cout << "AMateria Copy Assignment operator called" << std::endl;
	this->type = input.getType();
	return (*this);
}

AMateria::AMateria(std::string const &input)
{
	std::cout << "AMateria Custom String Copy constructor called" << std::endl;
	this->type = input;
}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter &input)
{
	std::cout << "Nothing to Use on " << input.getName() << "!" << std::endl;
}
