.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp -o Forms_Execute

clean:
	@if [ -f "Forms_Execute" ]; then\
		rm Forms_Execute;\
		printf "rm Forms_Execute\n";\
	else\
		printf "Forms_Execute Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
