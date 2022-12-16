.PHONY: all clean re

all:
	c++ -Wall -Werror -Wextra -std=c++98 megaphone.cpp -o megaphone

clean:
	@if [ -f "megaphone" ]; then\
		rm megaphone;\
		printf "rm megaphone\n";\
	else\
		printf "megaphone Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
