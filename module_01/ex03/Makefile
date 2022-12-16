.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Weapon.cpp HumanA.cpp HumanB.cpp -o Weapons

clean:
	@if [ -f "Weapons" ]; then\
		rm Weapons;\
		printf "rm Weapons\n";\
	else\
		printf "Weapons Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
