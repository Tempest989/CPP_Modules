#ifndef WRONG_CAT
#define WRONG_CAT

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &input);
		WrongCat &operator=(WrongCat const &input);

		void	makeSound() const;
};

#endif