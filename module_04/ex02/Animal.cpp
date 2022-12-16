#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
	this->type = "Default";
}

Animal::Animal(const Animal &input)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = input;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &input)
{
	std::cout << "Animal Copy Assignment operator called" << std::endl;
	this->type = input.getType();
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "unknown noises?!" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
