#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->type = "Default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &input)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = input;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &input)
{
	std::cout << "WrongAnimal Copy Assignment operator called" << std::endl;
	this->type = input.getType();
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "unknown noises?!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
