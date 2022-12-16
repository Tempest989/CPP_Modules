#include "Form.hpp"

int main()
{
	Bureaucrat bob("Bob", 50);
	std::cout << bob << std::endl;
	Bureaucrat jeremy("Jeremy", 75);
	std::cout << jeremy << std::endl;
	Bureaucrat b_low("damn", 150);
	std::cout << b_low << std::endl;
	Form	mixed1("Mixed", 50, 75);
	std::cout << mixed1 << std::endl;
	Form	mixed2("Mixed", 75, 50);
	std::cout << mixed2 << std::endl;
	Form	high("High", 1, 1);
	std::cout << high << std::endl;
	Form	low("Low", 150, 150);
	std::cout << low << std::endl;

	b_low.signForm(high);
	std::cout << high << std::endl;
	b_low.signForm(low);
	std::cout << low << std::endl;
	jeremy.signForm(mixed1);
	std::cout << mixed1 << std::endl;
	jeremy.signForm(mixed2);
	std::cout << mixed2 << std::endl;
	bob.signForm(mixed1);
	std::cout << mixed1 << std::endl;
	return (0);
}