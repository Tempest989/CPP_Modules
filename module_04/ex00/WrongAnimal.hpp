#ifndef WRONG_ANIMAL
#define WRONG_ANIMAL

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &input);
		WrongAnimal &operator=(WrongAnimal const &input);

		void	makeSound() const;

		std::string	getType() const;

	protected:
		std::string	type;
};

#endif