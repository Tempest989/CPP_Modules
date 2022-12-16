#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "Default";
}

Zombie::Zombie(std::string input)
{
	name = input;
}

Zombie::~Zombie()
{
	std::cout << name << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
