.PHONY: all clean re

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Zombie.cpp newZombie.cpp randomChump.cpp -o Zombie

clean:
	@if [ -f "Zombie" ]; then\
		rm Zombie;\
		printf "rm Zombie\n";\
	else\
		printf "Zombie Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
