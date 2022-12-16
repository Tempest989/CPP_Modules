.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp -o Brain

clean:
	@if [ -f "Brain" ]; then\
		rm Brain;\
		printf "rm Brain\n";\
	else\
		printf "Brain Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
