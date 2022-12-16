.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Harl.cpp -o Harl

clean:
	@if [ -f "Harl" ]; then\
		rm Harl;\
		printf "rm Harl\n";\
	else\
		printf "Harl Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
