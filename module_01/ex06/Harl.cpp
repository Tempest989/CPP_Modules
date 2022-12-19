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
	int flag = 0;
	for (int track = 0; track < 4; track++)
	{
		if (options[track] == level)
			flag = 1;
		if (flag == 1)
		{
			switch (track)
			{
				case 0:
					std::cout << "[ DEBUG ]" << std::endl;
					(harl.*funcs[0])();
					std::cout << std::endl;
					break;
				case 1:
					std::cout << "[ INFO ]" << std::endl;
					(harl.*funcs[1])();
					std::cout << std::endl;
					break;
				case 2:
					std::cout << "[ WARNING ]" << std::endl;
					(harl.*funcs[2])();
					std::cout << std::endl;
					break;
				case 3:
					std::cout << "[ ERROR ]" << std::endl;
					(harl.*funcs[3])();
					std::cout << std::endl;
					return;
				default:
					break;
			}
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
