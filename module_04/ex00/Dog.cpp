#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &input) : Animal()
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = input;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &input)
{
	std::cout << "Dog Copy Assignment operator called" << std::endl;
	this->type = input.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOOF!" << std::endl;
}
