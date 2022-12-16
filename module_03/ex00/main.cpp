#include "ClapTrap.hpp"

void	stats(ClapTrap &input)
{
	std::cout << std::endl << "Name: " << input.getName() << std::endl;
	std::cout << "Health: " << input.getHp() << std::endl;
	std::cout << "Energy: " << input.getEnergy() << std::endl;
	std::cout << "Attack: " << input.getAtk() << std::endl << std::endl;
}

int main()
{
	ClapTrap player("Bob");
	stats(player);
	player.attack("Rock");
	stats(player);
	player.beRepaired(5);
	stats(player);
	player.takeDamage(5);
	stats(player);
	player.setEnergy(0);
	std::cout << "Setting ClapTraps Energy to 0 for Testing Purposes....." << std::endl;
	stats(player);
	player.attack("Rock");
	stats(player);
	player.beRepaired(10);
	stats(player);
	player.takeDamage(5);
	stats(player);
	player.setEnergy(10);
	player.setHp(0);
	std::cout << "Setting ClapTraps Energy to 10 and HP to 0 for Testing Purposes....." << std::endl;
	stats(player);
	player.attack("Rock");
	stats(player);
	player.beRepaired(10);
	stats(player);
	player.takeDamage(5);
	stats(player);
	return (0);
}
