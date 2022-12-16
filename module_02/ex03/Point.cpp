#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float first, const float second) : x(first), y(second)
{
}

Point::~Point()
{
}

Point::Point(const Point &input)
{
	*this = input;
}

Point	&Point::operator=(Point const &input)
{
	// this->x = input.x;
	// this->y = input.y;
	(Fixed) this->x = (Fixed) input.x;
	(Fixed) this->y = (Fixed) input.y;
	return (*this);
}

Fixed const &Point::getX() const
{
	return (this->x);
}

Fixed const &Point::getY() const
{
	return (this->y);
}
