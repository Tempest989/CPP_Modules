#ifndef BRAIN
#define BRAIN

#include <iostream>
#include <cstdlib>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const &input);
		Brain &operator=(Brain const &input);
		~Brain();

		std::string getIdea(int index) const;
		void		setIdea(int index, std::string input);
	private:
		std::string	ideas[100];
};

#endif