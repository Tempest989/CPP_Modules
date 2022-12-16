#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &input) : Animal(input)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = new Brain(*input.getBrain());
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(Cat const &input)
{
	std::cout << "Cat Copy Assignment operator called" << std::endl;
	if (this != &input)
	{
		this->~Cat();
		this->brain = new Brain(*input.getBrain());
		this->Animal::operator=(input);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MEOW!" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (this->brain);
}
