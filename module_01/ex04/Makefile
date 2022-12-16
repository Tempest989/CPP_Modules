.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp -o IOfile

clean:
	@if [ -f "IOfile" ]; then\
		rm IOfile;\
		printf "rm IOfile\n";\
	else\
		printf "IOfile Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
