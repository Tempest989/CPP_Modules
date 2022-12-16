#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &input) : WrongAnimal()
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = input;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &input)
{
	std::cout << "WrongCat Copy Assignment operator called" << std::endl;
	this->type = input.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "MEOW!" << std::endl;
}
