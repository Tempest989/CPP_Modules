#ifndef CURE
#define CURE

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &input);
		Cure &operator=(Cure const &input);

		AMateria	*clone() const;
		void		use(ICharacter &input);
};

#endif