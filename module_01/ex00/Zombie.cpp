#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Default";
}

Zombie::Zombie(std::string input)
{
	this->name = input;
}

Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
