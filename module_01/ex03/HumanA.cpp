#include "HumanA.hpp"

HumanA::HumanA()
{
	this->name = "Default";
}

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string input, Weapon &type)
{
	this->name = input;
	this->armament = &type;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->armament->getType() << std::endl;
}
