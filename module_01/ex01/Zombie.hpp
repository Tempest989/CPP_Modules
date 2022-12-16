#ifndef ZOMBIE
#define ZOMBIE
#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		Zombie(std::string input);
		void	announce( void );
	private:
		std::string name;
};

#endif