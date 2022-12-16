#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie *output = new Zombie[N];
	for (int i = 0; i < N; i++)
		output[i] = Zombie(name);
	return (output);
}
