#ifndef DIAMONDTRAP
#define DIAMONDTRAP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const std::string input);
		DiamondTrap(const DiamondTrap &input);
		DiamondTrap &operator=(DiamondTrap const &input);

		void	whoAmI();
		void	attack(const std::string &input);

		std::string		getName() const;
		unsigned int	getHp() const;
		void			setHp(unsigned int input);
		unsigned int	getEnergy() const;
		void			setEnergy(unsigned int input);
		unsigned int	getAtk() const;
		void			setAtk(unsigned int input);
	private:
		std::string	name;
};

#endif