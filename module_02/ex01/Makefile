.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Fixed.cpp -o Useful_Fix

clean:
	@if [ -f "Useful_Fix" ]; then\
		rm Useful_Fix;\
		printf "rm Useful_Fix\n";\
	else\
		printf "Useful_Fix Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
