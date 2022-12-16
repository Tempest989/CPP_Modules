#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string input);
		FragTrap(const FragTrap &input);
		FragTrap &operator=(FragTrap const &input);

		void	highFiveGuys();
};

#endif