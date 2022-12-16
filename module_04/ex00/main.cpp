#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "Wrong Output:" << std::endl << std::endl;
	const WrongAnimal *no = new WrongCat();
	const WrongAnimal *base = new WrongAnimal();
	std::cout << no->getType() << " " << std::endl;
	no->makeSound(); //will output the cat sound!
	base->makeSound();

	std::cout << std::endl << "Deconstructors:" << std::endl << std::endl;
	delete meta;
	delete j;
	delete i;
	delete no;
	delete base;
	return 0;
}