.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp -o Convert

clean:
	@if [ -f "Convert" ]; then\
		rm Convert;\
		printf "rm Convert\n";\
	else\
		printf "Convert Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
