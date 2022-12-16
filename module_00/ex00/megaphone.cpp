#include <iostream>

int main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int track = 1; track < ac; track++)
	{
		for (int letter = 0; av[track][letter]; letter++) av[track][letter] = toupper(av[track][letter]);
		std::cout << av[track];
	}
	std::cout << std::endl;
	return (0);
}
