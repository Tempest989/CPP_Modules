.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp ClapTrap.cpp -o ClapTrap

clean:
	@if [ -f "ClapTrap" ]; then\
		rm ClapTrap;\
		printf "rm ClapTrap\n";\
	else\
		printf "ClapTrap Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
