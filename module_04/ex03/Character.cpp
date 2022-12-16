#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default constructor called" << std::endl;
	this->name = "Default";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &input)
{
	std::cout << "Character Copy constructor called" << std::endl;
	this->name = input.getName();
	for (int i = 0; i < 4; i++)
	{
		AMateria const *temp = input.getInventory(i);
		if (temp != NULL)
			this->inventory[i] = temp->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character &Character::operator=(Character const &input)
{
	std::cout << "Character Copy Assignment operator called" << std::endl;
	if (this != &input)
	{
		this->~Character();
		this->name = input.getName();
		for (int i = 0; i < 4; i++)
		{
			AMateria const *temp = input.getInventory(i);
			if (temp != NULL)
				this->inventory[i] = temp->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::Character(std::string const &input)
{
	std::cout << "Character Custom String Copy constructor called" << std::endl;
	this->name = input;
}

std::string const	&Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = materia;
			return;
		}
	}
}

void	Character::unequip(int index)
{
	if (index < 0 || index > 3)
		return;
	this->inventory[index] = NULL;
}

void	Character::use(int index, ICharacter &target)
{
	if (index < 0 || index > 3)
		return;
	if (this->inventory[index] != NULL)
		this->inventory[index]->use(target);
}

AMateria	*Character::getInventory(int index) const
{
	if (index < 1 || index > 3)
		return (0);
	return (this->inventory[index]);
}
