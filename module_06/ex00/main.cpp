#include <iostream>
#include <string>
#include <stdlib.h>

int ft_input_check(std::string input)
{
	if (input.compare("nan") || input.compare("nanf") || input.compare("+inf") || input.compare("+inff") || input.compare("-inf") || input.compare("-inff"))
		return (1);
	unsigned int track = 0;
	unsigned int size = input.length();
	if (input.at(0) == '+' || input.at(0) == '-')
		track++;
	for ( ; track < size; track++)
	{
		if (input.at(track) == '.')
			track++;
		if (input.at(track) < '0' || input.at(track) > '9')
			break;
	}
	if (input.at(track) == 'f' && track == size - 1 && (size > 2 || (size == 2 && (input.at(0) != '-' || input.at(0) != '+'))))
		return (1);
	else if (input.at(track) < '0' || input.at(track) > '9')
		return (-1);
	return (1);
}

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Incorrect Number of Paramters Passed." << std::endl;
		return (0);
	}
	std::string input = av[1];
	if (ft_input_check(input) == -1)
	{
		std::cout << "Unable to Convert Invalid Input." << std::endl;
		return (0);
	}
	float temp = strtof(av[1], NULL);
	int number = (int)temp;
	std::cout << "char: ";
	if (number < 0 || number > 255)
		std::cout << "impossible" << std::endl;
	else if (number >= 0 && number < 32)
		std::cout << "Non Displayable" << std::endl;
	else
		std::cout << "'" << (char)number << "'" << std::endl;
	std::cout << "int: " << number << std::endl;
	std::cout << "float: " << temp << "f" << std::endl;
	double num = (double)temp;
	std::cout << "double: " << num << std::endl;
	return (0);
}