#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->name = "Default";
	this->hp = 10;
	this->energy = 10;
	this->atk = 0;
}

ClapTrap::ClapTrap(const std::string input)
{
	std::cout << "ClapTrap String constructor called" << std::endl;
	this->name = input;
	this->hp = 10;
	this->energy = 10;
	this->atk = 0;
}

ClapTrap::ClapTrap(const ClapTrap &input)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = input;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &input)
{
	std::cout << "ClapTrap Copy Assignment operator called" << std::endl;
	this->name = input.getName();
	this->hp = input.getHp();
	this->energy = input.getEnergy();
	this->atk = input.getAtk();
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hp != 0)
	{
		if (this->energy != 0)
		{
			std::cout << "ClapTrap " << this->name << " Attacks " << target << ", Causing " << this->atk << " Points of Damage!" << std::endl;
			this->energy--;
		}
		else
			std::cout << "ClapTrap " << this->name << " Is Out of Energy! So It is Unable to Attack!!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has Already Fainted, so It Can't Attack!!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp != 0)
	{
		this->hp -= amount;
		std::cout << "ClapTrap " << this->name << " Took " << amount << " of Damage!" << std::endl;
		if (this->hp == 0)
			std::cout << "ClapTrap " << this->name << " has Fainted!!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has Already Fainted!! Please Stop Attacking It!!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp != 0)
	{
		if (this->energy != 0)
		{
			this->hp += amount;
			std::cout << "ClapTrap " << this->name << " Repaired for " << amount << " HP!" << std::endl;
			this->energy--;
		}
		else
			std::cout << "ClapTrap " << this->name << " Is Out of Energy! So It is Unable to Repair Itself!!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " has Already Fainted, so It Can't Give Orders to Repair Itself!!" << std::endl;
}

std::string	ClapTrap::getName() const
{
	return (this->name);
}

unsigned int	ClapTrap::getHp() const
{
	return (this->hp);
}

void	ClapTrap::setHp(unsigned int input)
{
	this->hp = input;
}

unsigned int	ClapTrap::getEnergy() const
{
	return (this->energy);
}

void	ClapTrap::setEnergy(unsigned int input)
{
	this->energy = input;
}

unsigned int	ClapTrap::getAtk() const
{
	return (this->atk);
}

void	ClapTrap::setAtk(unsigned int input)
{
	this->atk = input;
}
