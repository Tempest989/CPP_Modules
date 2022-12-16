#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string input);
		ScavTrap(const ScavTrap &input);
		ScavTrap &operator=(ScavTrap const &input);

		void	guardGate();
		void	attack(const std::string &target);
};

#endif