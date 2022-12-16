.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp ClapTrap.cpp ScavTrap.cpp -o ScavTrap

clean:
	@if [ -f "ScavTrap" ]; then\
		rm ScavTrap;\
		printf "rm ScavTrap\n";\
	else\
		printf "ScavTrap Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
