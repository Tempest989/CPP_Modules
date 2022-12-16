.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp -o Intern

clean:
	@if [ -f "Intern" ]; then\
		rm Intern;\
		printf "rm Intern\n";\
	else\
		printf "Intern Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
