#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->set[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &input)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = input;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->set[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &input)
{
	std::cout << "MateriaSource Copy Assignment operator called" << std::endl;
	if (this != &input)
	{
		this->~MateriaSource();
		for (int i = 0; i < 4; i++)
			this->set[i] = input.set[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* input)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->set[i] == NULL)
		{
			this->set[i] = input->clone();
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->set[i]->getType() == type)
			return (this->set[i]->clone());
	}
	return (0);
}
