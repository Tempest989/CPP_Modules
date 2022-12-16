.PHONY: all clean re check

all:
	c++ -Wall -Werror -Wextra -std=c++98 tests.cpp Account.cpp -o Account

clean:
	@if [ -f "Account" ]; then\
		rm Account;\
		printf "rm Account\n";\
	else\
		printf "Account Doesn't Exist so It Cannot Be Removed\n";\
	fi

re: clean all

check:
	./Account > check.log
	diff check.log testing.log
