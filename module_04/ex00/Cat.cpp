#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &input) : Animal()
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = input;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &input)
{
	std::cout << "Cat Copy Assignment operator called" << std::endl;
	this->type = input.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MEOW!" << std::endl;
}
