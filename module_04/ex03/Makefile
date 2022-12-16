.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp -o Interface

clean:
	@if [ -f "Interface" ]; then\
		rm Interface;\
		printf "rm Interface\n";\
	else\
		printf "Interface Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
