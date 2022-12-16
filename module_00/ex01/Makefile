.PHONY: all clean re

all:
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp PhoneBook.cpp Contact.cpp -o PhoneBook

clean:
	@if [ -f "PhoneBook" ]; then\
		rm PhoneBook;\
		printf "rm PhoneBook\n";\
	else\
		printf "PhoneBook Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all
