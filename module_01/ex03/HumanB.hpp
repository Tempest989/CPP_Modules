#ifndef HUMANB
#define HUMANB
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public:
		HumanB();
		~HumanB();
		HumanB(std::string input);
		void	attack();
		void	setWeapon(Weapon &input);
	private:
		Weapon		*armament;
		std::string	name;
};

#endif