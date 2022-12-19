#include "HumanB.hpp"

HumanB::HumanB()
{
	this->name = "Default";
}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string input)
{
	this->name = input;
}

void	HumanB::setWeapon(Weapon &input)
{
	this->armament = &input;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->armament->getType() << std::endl;
}
