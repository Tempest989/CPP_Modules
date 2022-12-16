#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->name = "Default";
	this->hp = 100;
	this->energy = 50;
	this->atk = 30;
}

DiamondTrap::DiamondTrap(const std::string input) : ClapTrap(input + "_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap String constructor called" << std::endl;
	this->name = input;
	this->hp = 100;
	this->energy = 50;
	this->atk = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &input) : ClapTrap(input), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = input;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &input)
{
	std::cout << "DiamondTrap Copy Assignment operator called" << std::endl;
	this->name = input.getName();
	this->ClapTrap::name = input.ClapTrap::name;
	this->hp = input.getHp();
	this->energy = input.getEnergy();
	this->atk = input.getAtk();
	return (*this);
}

void	DiamondTrap::attack(const std::string &input)
{
	this->ScavTrap::attack(input);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Name: " << this->name << std::endl << "ClapTrap Name: " << this->ClapTrap::name << std::endl;
}

std::string		DiamondTrap::getName() const
{
	return (this->name);
}

unsigned int	DiamondTrap::getHp() const
{
	return (this->hp);
}

void			DiamondTrap::setHp(unsigned int input)
{
	this->hp = input;
}

unsigned int	DiamondTrap::getEnergy() const
{
	return (this->energy);
}

void			DiamondTrap::setEnergy(unsigned int input)
{
	this->energy = input;
}

unsigned int	DiamondTrap::getAtk() const
{
	return (this->atk);
}

void			DiamondTrap::setAtk(unsigned int input)
{
	this->atk = input;
}
