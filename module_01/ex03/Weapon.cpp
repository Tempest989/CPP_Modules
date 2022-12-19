#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "Bare Hands";
}

Weapon::Weapon(std::string input)
{
	this->type = input;
}

const std::string Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string input)
{
	this->type = input;
}
