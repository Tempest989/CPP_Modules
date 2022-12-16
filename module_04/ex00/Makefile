.PHONY: all clean re 

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp -o Polymorphism

clean:
	@if [ -f "Polymorphism" ]; then\
		rm Polymorphism;\
		printf "rm Polymorphism\n";\
	else\
		printf "Polymorphism Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
