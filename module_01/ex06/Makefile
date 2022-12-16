.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Harl.cpp -o harlFilter

clean:
	@if [ -f "harlFilter" ]; then\
		rm harlFilter;\
		printf "rm harlFilter\n";\
	else\
		printf "harlFilter Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
