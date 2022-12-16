#ifndef ANIMAL
#define ANIMAL

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &input);
		Animal &operator=(Animal const &input);

		virtual void	makeSound() const = 0;

		std::string	getType() const;

	protected:
		std::string	type;
};

#endif