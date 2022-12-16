.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Fixed.cpp -o Math_Fix

clean:
	@if [ -f "Math_Fix" ]; then\
		rm Math_Fix;\
		printf "rm Math_Fix\n";\
	else\
		printf "Math_Fix Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
