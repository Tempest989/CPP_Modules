#ifndef POINT
#define  POINT

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float first, const float second);
		~Point();
		Point(const Point &input);   //copy constructor
		Point	&operator=(Point const &input);
		Fixed const &getX() const;
		Fixed const &getY() const;
	private:
		Fixed const	x;
		Fixed const	y;
};

#endif