.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Bureaucrat.cpp -o Bureaucrat

clean:
	@if [ -f "Bureaucrat" ]; then\
		rm Bureaucrat;\
		printf "rm Bureaucrat\n";\
	else\
		printf "Bureaucrat Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
