#ifndef WEAPON
#define WEAPON
#include <string>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string input);
		const std::string	getType();
		void				setType(std::string input);
	private:
		std::string type;
};

#endif