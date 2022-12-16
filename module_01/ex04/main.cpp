#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Error: Please give 3 input parameters." << std::endl;
		return (0);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream reading(av[1]);
	if (!reading)
	{
		std::cout << "Error: Inputted file name does not correspond with an existing file." << std::endl;
		return (0);
	}
	std::string file = av[1];
	file.append(".replace");
	std::ofstream output(file.c_str());
	std::string line;
	std::size_t found;
	while (std::getline(reading, line))
	{
		while (true)
		{
			found = line.find(s1);
			if (found > line.size())
				break;
			line.erase(found, s1.size());
			line.insert(found, s2);
		}
		output << line << "\n";
	}
	reading.close();
	output.close();
}
