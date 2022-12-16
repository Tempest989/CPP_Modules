#ifndef AMATERIA
#define AMATERIA

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria &input);
		AMateria &operator=(AMateria const &input);

		AMateria(std::string const &type);

		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &input);
};

#endif