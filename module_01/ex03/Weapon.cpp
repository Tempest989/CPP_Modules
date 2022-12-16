#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "Bare Hands";
}

Weapon::Weapon(std::string input)
{
	type = input;
}

const std::string Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string input)
{
	type = input;
}
