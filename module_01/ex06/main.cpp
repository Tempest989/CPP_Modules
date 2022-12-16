#include "Harl.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Error: Incorrect Number of Paramters Passed." << std::endl;
		return (0);
	}
	std::string command = av[1];
	Harl output;
	output.complain(command);
	return (0);
}
