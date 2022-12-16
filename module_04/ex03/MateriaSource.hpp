#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &input);
		MateriaSource &operator=(MateriaSource const &input);

		void		learnMateria(AMateria* input);
		AMateria*	createMateria(std::string const & type);
	private:
		AMateria	*set[4];
};

#endif