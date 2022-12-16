#ifndef DOG
#define DOG

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &input);
		Dog &operator=(Dog const &input);

		void	makeSound() const;
};

#endif