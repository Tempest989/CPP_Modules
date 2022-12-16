.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp -o BrainFire

clean:
	@if [ -f "BrainFire" ]; then\
		rm BrainFire;\
		printf "rm BrainFire\n";\
	else\
		printf "BrainFire Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
