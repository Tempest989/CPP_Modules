.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp -o DiamondTrap

clean:
	@if [ -f "DiamondTrap" ]; then\
		rm DiamondTrap;\
		printf "rm DiamondTrap\n";\
	else\
		printf "DiamondTrap Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
