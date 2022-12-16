#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &input) : Animal(input)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->brain = new Brain(*input.getBrain());
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(Dog const &input)
{
	std::cout << "Dog Copy Assignment operator called" << std::endl;
	if (this != &input)
	{
		this->~Dog();
		this->brain = new Brain(*input.getBrain());
		this->Animal::operator=(input);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOOF!" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return (this->brain);
}
