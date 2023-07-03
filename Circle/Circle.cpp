#include "circle.h"

circle::circle(double r)
{
	this->r = r;
}

double circle::perimetr(double r)
{
	return 3.14 * 2 * r;
}

double circle::area(double r)
{
	return 3.14 * r * r;
}

circle::~circle()
{
}
