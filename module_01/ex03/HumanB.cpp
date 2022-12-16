#include "HumanB.hpp"

HumanB::HumanB()
{
	name = "Default";
}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string input)
{
	name = input;
}

void	HumanB::setWeapon(Weapon &input)
{
	armament = &input;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << armament->getType() << std::endl;
}
