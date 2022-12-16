.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp -o FragTrap

clean:
	@if [ -f "FragTrap" ]; then\
		rm FragTrap;\
		printf "rm FragTrap\n";\
	else\
		printf "FragTrap Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
