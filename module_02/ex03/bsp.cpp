#include "Point.hpp"

bool	over_line(Point const &A, Point const &B, Point const &point, Point const &third)
{
	float a = B.getY().toFloat() - A.getY().toFloat();
	float b = A.getX().toFloat() - B.getX().toFloat();
	float c = (a * A.getX().toFloat()) + (b * A.getY().toFloat());
	int side = 0;
	if (((a * third.getX().toFloat()) + (b * third.getY().toFloat())) < c)
		side = 1;
	if (side == 1 && (((a * point.getX().toFloat()) + (b * point.getY().toFloat())) < c))
		return (false);
	else if (side == 0 && (((a * point.getX().toFloat()) + (b * point.getY().toFloat())) > c))
		return (false);
	return (true);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (over_line(a, b, point, c) || over_line(a, c, point, b) || over_line(b, c, point, a))
		return (false);
	return (true);
}
