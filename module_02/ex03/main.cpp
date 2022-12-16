#include "Point.hpp"

extern bool	bsp(Point const a, Point const b, Point const c, Point const point);

void	print_true_false(bool result)
{
	if (result)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}

int main( void ) 
{
	std::cout << "-----------------------------------------------------------------" << std::endl;
	std::cout << "Outside the Triangle (Should come up as false!):" << std::endl << std::endl;
	std::cout << "Inputs: a(0, 5), b(5, 10), c(10, 0)" << std::endl << std::endl;

	std::cout << "Test 1: Point (-1, 0)" << std::endl;
	std::cout << "Result: ";
	print_true_false(bsp(Point(0, 5), Point(5, 10), Point(10, 0), Point(-1, 0)));
	std::cout << "Test 2: Point (15, 15)" << std::endl;
	std::cout << "Result: ";
	print_true_false(bsp(Point(0, 5), Point(5, 10), Point(10, 0), Point(15, 15)));
	std::cout << "Test 3: Point (3, 9)" << std::endl;
	std::cout << "Result: ";
	print_true_false(bsp(Point(0, 5), Point(5, 10), Point(10, 0), Point(3, 9)));

	std::cout << "-----------------------------------------------------------------" << std::endl;
	std::cout << "Inside the Triangle (Should come up as true!):" << std::endl << std::endl;
	std::cout << "Inputs: a(0, 5), b(5, 10), c(10, 0)" << std::endl << std::endl;

	std::cout << "Test 1: Point (5, 5)" << std::endl;
	std::cout << "Result: ";
	print_true_false(bsp(Point(0, 5), Point(5, 10), Point(10, 0), Point(5, 5)));

	std::cout << "-----------------------------------------------------------------" << std::endl;
	std::cout << "On vertex (outside line) of Triangle (Should come up as false!):" << std::endl << std::endl;
	std::cout << "Inputs: a(0, 5), b(5, 10), c(10, 0)" << std::endl << std::endl;

	std::cout << "Test 1: Point (2, 7), is on line from point a to b" << std::endl;
	std::cout << "Result: ";
	print_true_false(bsp(Point(0, 5), Point(5, 10), Point(10, 0), Point(2, 7)));

	std::cout << "-----------------------------------------------------------------" << std::endl;
	std::cout << "Float Inside the Triangle (Should come up as true!):" << std::endl << std::endl;
	std::cout << "Inputs: a(0, 5.1), b(5.6, 10.33), c(10.98, 0.1)" << std::endl << std::endl;

	std::cout << "Test 1: Point (6.5, 5.123)" << std::endl;
	std::cout << "Result: ";
	print_true_false(bsp(Point(0, 5.1), Point(5.6, 10.33), Point(10.98, 0.1), Point(6.5, 5.123)));

	std::cout << "-----------------------------------------------------------------" << std::endl;
	std::cout << "Float Outside the Triangle (Should come up as false!):" << std::endl << std::endl;
	std::cout << "Inputs: a(0, 5.1), b(5.6, 10.33), c(10.98, 0.1)" << std::endl << std::endl;

	std::cout << "Test 1: Point (-20.452, -100.9832)" << std::endl;
	std::cout << "Result: ";
	print_true_false(bsp(Point(0, 5.1), Point(5.6, 10.33), Point(10.98, 0.1), Point(-20.452, -100.9832)));
	std::cout << "-----------------------------------------------------------------" << std::endl;
	return (0);
}
