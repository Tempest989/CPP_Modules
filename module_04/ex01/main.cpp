#include "Dog.hpp"
#include "Cat.hpp"
#include <ctime>

int main()
{
	srand(time(NULL));

	Animal *array[] = { new Dog(), new Dog(), new Cat(), new Cat()};

	std::cout << "Type and Sound:" << std::endl;
	std::cout << array[0]->getType() << " " << std::endl;
	std::cout << array[2]->getType() << " " << std::endl;
	array[0]->makeSound(); //will output the cat sound!
	array[2]->makeSound();

	std::cout << "Deep Copy check: " << std::endl;
	Dog copy(*(Dog *)array[1]);
	int flag = 100;
	for (int i = 0; i < 100; i++)
	{
		if (copy.getBrain()->getIdea(i) == ((Dog *)array[1])->getBrain()->getIdea(i))
			flag--;
	}
	if (flag == 0)
		std::cout << "Same! Next Test...." << std::endl;
	else
		std::cout << "Fail!" << std::endl;
	
	flag = 99;
	for (int i = 1; i < 100; i++)
	{
		if (copy.getBrain()->getIdea(0) != copy.getBrain()->getIdea(i))
		{
			std::cout << "Before: " << copy.getBrain()->getIdea(0) << std::endl; 
			copy.getBrain()->setIdea(0, copy.getBrain()->getIdea(i));
			std::cout << "After: " << copy.getBrain()->getIdea(0) << std::endl;
			break;
		}
		flag--;
	}
	if (flag == 0)
	{
		std::cout << "All the Ideas were the same!! Unlucky....Time to run it again." << std::endl;
	}
	else if (copy.getBrain()->getIdea(0) != ((Dog *)array[1])->getBrain()->getIdea(0))
		std::cout << "Pass!! Congratulations!!" << std::endl;
	else
		std::cout << "Fail!" << std::endl;

	std::cout << std::endl << "Deconstructors:" << std::endl << std::endl;
	for (int j = 0; j <= 3; j++)
		delete array[j];
	return 0;
}