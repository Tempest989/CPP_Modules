#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string input);
		ClapTrap(const ClapTrap &input);
		ClapTrap &operator=(ClapTrap const &input);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		getName() const;
		unsigned int	getHp() const;
		void			setHp(unsigned int input);
		unsigned int	getEnergy() const;
		void			setEnergy(unsigned int input);
		unsigned int	getAtk() const;
		void			setAtk(unsigned int input);

	private:
		std::string		name;
		unsigned int	hp;
		unsigned int	energy;
		unsigned int	atk;
};

#endif