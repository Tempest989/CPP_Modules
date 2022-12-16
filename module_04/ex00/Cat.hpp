#ifndef CAT
#define CAT

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &input);
		Cat &operator=(Cat const &input);

		void	makeSound() const;
};

#endif