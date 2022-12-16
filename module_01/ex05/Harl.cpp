#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug( void )
{
	std::cout << "There is a Car Pile-Up on Highway 4." << std::endl;
}

void	Harl::info( void )
{
	std::cout << "The Special Sale for Eggs in the Markets is being Extended and Improved! Only for the Next 3 Days." << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "Warning, 10 seconds left till the Train leaves the Station!" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "An Error has Occured! Aborted the Mission!" << std::endl;
}


void	Harl::complain( std::string level )
{
	std::string options[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*funcs[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	Harl harl;
	for (int i = 0; i < 4; i++)
	{
		if (options[i] == level)
		{
			(harl.*funcs[i])();
			return;
		}
	}
}
