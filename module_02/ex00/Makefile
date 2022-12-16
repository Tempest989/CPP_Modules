.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Fixed.cpp -o Fixed

clean:
	@if [ -f "Fixed" ]; then\
		rm Fixed;\
		printf "rm Fixed\n";\
	else\
		printf "Fixed Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
