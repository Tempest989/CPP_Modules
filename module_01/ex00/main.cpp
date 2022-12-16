#include "Zombie.hpp"

extern Zombie	*newZombie(std::string name);
extern void		randomChump(std::string name);

int main()
{
	Zombie bob("Bob");
	bob.announce();
	Zombie *hero = newZombie("Goku");
	randomChump("JERRRYYY");
	hero->announce();
	delete hero;
	return (0);
}