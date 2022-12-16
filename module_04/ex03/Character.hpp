#ifndef CHARACTER
#define CHARACTER

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	public:
		Character();
		~Character();
		Character(std::string const &input);
		Character(const Character &input);
		Character &operator=(Character const &input);

		std::string const	&getName() const;
		void				equip(AMateria *materia);
		void				unequip(int index);
		void				use(int index, ICharacter &target);
		AMateria			*getInventory(int index) const;

	private:
		std::string	name;
		AMateria	*inventory[4];
};

#endif