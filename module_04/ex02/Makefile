.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp -o Abstract

clean:
	@if [ -f "Abstract" ]; then\
		rm Abstract;\
		printf "rm Abstract\n";\
	else\
		printf "Abstract Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
