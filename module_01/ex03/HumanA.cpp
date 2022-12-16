#include "HumanA.hpp"

HumanA::HumanA()
{
	name = "Default";
}

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string input, Weapon &type)
{
	name = input;
	armament = &type;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << armament->getType() << std::endl;
}
