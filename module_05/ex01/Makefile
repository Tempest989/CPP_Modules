.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Bureaucrat.cpp Form.cpp -o Forms

clean:
	@if [ -f "Forms" ]; then\
		rm Forms;\
		printf "rm Forms\n";\
	else\
		printf "Forms Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
