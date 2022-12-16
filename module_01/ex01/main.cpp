#include "Zombie.hpp"

extern Zombie	*zombieHorde(int N, std::string name);

int main()
{
	Zombie *check = zombieHorde(-123, "Error");
	if (check == NULL)
		std::cout << "Check = NULL" << std::endl;
	delete[] check;
	check = zombieHorde(0, "Error Again");
	if (check == NULL)
		std::cout << "Check = NULL" << std::endl;
	delete[] check;
	check = zombieHorde(5, "POWEEEERRR");
	if (check == NULL)
		std::cout << "Check = NULL" << std::endl;
	for (int i = 0; i < 5; i++)
		check[i].announce();
	delete[] check;
	return (0);
}