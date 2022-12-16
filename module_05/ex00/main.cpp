#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat high("too high", 0);
		std::cout << high << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat low("too low", 151);
		std::cout << low << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat low("low fine", 150);
	std::cout << low << std::endl;
	Bureaucrat high("high fine", 1);
	std::cout << high << std::endl;
	try
	{
		high.gradePlus(1);
		std::cout << high << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		low.gradeMinus(1);
		std::cout << high << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	low.gradePlus(50);
	std::cout << low << std::endl;
	high.gradeMinus(50);
	std::cout << high << std::endl;

	return (0);
}