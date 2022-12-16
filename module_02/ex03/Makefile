.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Fixed.cpp Point.cpp bsp.cpp -o Triangle

clean:
	@if [ -f "Triangle" ]; then\
		rm Triangle;\
		printf "rm Triangle\n";\
	else\
		printf "Triangle Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
