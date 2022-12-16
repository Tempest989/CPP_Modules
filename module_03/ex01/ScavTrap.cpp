#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->hp = 100;
	this->energy = 50;
	this->atk = 20;
}

ScavTrap::ScavTrap(const std::string input) : ClapTrap(input)
{
	std::cout << "ScavTrap String constructor called" << std::endl;
	this->hp = 100;
	this->energy = 50;
	this->atk = 20;
}

ScavTrap::ScavTrap(const ScavTrap &input) : ClapTrap(input)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = input;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &input)
{
	std::cout << "ScavTrap Copy Assignment operator called" << std::endl;
	this->name = input.getName();
	this->hp = input.getHp();
	this->energy = input.getEnergy();
	this->atk = input.getAtk();
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->hp != 0)
	{
		if (this->energy != 0)
		{
			std::cout << "ScavTrap " << this->name << " Attacks " << target << ", Causing " << this->atk << " Points of Damage!" << std::endl;
			this->energy--;
		}
		else
			std::cout << "ScavTrap " << this->name << " Is Out of Energy! So It is Unable to Attack!!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " has Already Fainted, so It Can't Attack!!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap Is Now in GATE KEEPER Mode!! Watch Out All Would Be Intruders!!" << std::endl;
}
