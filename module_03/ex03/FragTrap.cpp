#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->atk = 30;
}

FragTrap::FragTrap(const std::string input) : ClapTrap(input)
{
	std::cout << "FragTrap String constructor called" << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->atk = 30;
}

FragTrap::FragTrap(const FragTrap &input) : ClapTrap(input)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = input;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &input)
{
	std::cout << "FragTrap Copy Assignment operator called" << std::endl;
	this->name = input.getName();
	this->hp = input.getHp();
	this->energy = input.getEnergy();
	this->atk = input.getAtk();
	return (*this);
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap Is Looking for a HIGH 5 From the Crowd.................no one huh?" << std::endl;
}
