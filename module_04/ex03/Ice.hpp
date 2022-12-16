#ifndef ICE
#define ICE

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &input);
		Ice &operator=(Ice const &input);

		AMateria	*clone() const;
		void		use(ICharacter &input);
};

#endif