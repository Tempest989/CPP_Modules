#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
	std::string	thoughts[10] = {"Something", "Wrong", "Right", "1", "0", "F***", ".....", "Error", "Happyness", "$$$$"};
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = thoughts[rand() % 10];
		std::cout << ideas[i] << " ";
	}
	std::cout << std::endl << std::endl;
}

Brain::Brain(const Brain &input)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = input;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &input)
{
	std::cout << "Brain Copy Assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = input.getIdea(i);
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

void		Brain::setIdea(int index, std::string input)
{
	this->ideas[index] = input;
}
