#include "ScavTrap.hpp"

void	stats(ScavTrap &input)
{
	std::cout << std::endl << "Name: " << input.getName() << std::endl;
	std::cout << "Health: " << input.getHp() << std::endl;
	std::cout << "Energy: " << input.getEnergy() << std::endl;
	std::cout << "Attack: " << input.getAtk() << std::endl << std::endl;
}

int main()
{
	ScavTrap player("King");
	stats(player);
	player.attack("Rock");
	stats(player);
	player.beRepaired(50);
	stats(player);
	player.takeDamage(50);
	stats(player);
	player.setEnergy(0);
	std::cout << "Setting ScavTraps Energy to 0 for Testing Purposes....." << std::endl;
	stats(player);
	player.attack("Rock");
	stats(player);
	player.beRepaired(100);
	stats(player);
	player.takeDamage(50);
	stats(player);
	player.setEnergy(10);
	player.setHp(0);
	std::cout << "Setting ScavTraps Energy to 10 and HP to 0 for Testing Purposes....." << std::endl;
	stats(player);
	player.attack("Rock");
	stats(player);
	player.beRepaired(100);
	stats(player);
	player.takeDamage(50);
	stats(player);
	player.guardGate();
	std::cout << std::endl;
	return (0);
}
