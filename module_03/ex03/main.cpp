#include "DiamondTrap.hpp"

void	stats(DiamondTrap &input)
{
	std::cout << std::endl << "Name: " << input.getName() << std::endl;
	std::cout << "Claptrap Name: " << input.ClapTrap::getName() << std::endl;
	std::cout << "Health: " << input.getHp() << std::endl;
	std::cout << "Energy: " << input.getEnergy() << std::endl;
	std::cout << "Attack: " << input.getAtk() << std::endl << std::endl;
}

int main()
{
	DiamondTrap player("Grenade");
	stats(player);
	player.attack("Rock");
	stats(player);
	player.beRepaired(50);
	stats(player);
	player.takeDamage(50);
	stats(player);
	player.setEnergy(0);
	std::cout << "Setting DiamondTraps Energy to 0 for Testing Purposes....." << std::endl;
	stats(player);
	player.attack("Rock");
	stats(player);
	player.beRepaired(100);
	stats(player);
	player.takeDamage(50);
	stats(player);
	player.setEnergy(10);
	player.setHp(0);
	std::cout << "Setting DiamondTraps Energy to 10 and HP to 0 for Testing Purposes....." << std::endl;
	stats(player);
	player.attack("Rock");
	stats(player);
	player.beRepaired(100);
	stats(player);
	player.takeDamage(50);
	stats(player);
	player.whoAmI();
	std::cout << std::endl;
	return (0);
}
