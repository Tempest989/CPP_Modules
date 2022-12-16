#ifndef HUMANA
#define HUMANA
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public:
		HumanA();
		~HumanA();
		HumanA(std::string input, Weapon &type);
		void	attack();
	private:
		Weapon		*armament;
		std::string	name;
};

#endif