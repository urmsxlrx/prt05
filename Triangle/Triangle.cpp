#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(double h, double a, double b, double c)
{
    this->h = h;
    this->a = a;
    this->b = b;
    this->c = c;
}
Triangle::~Triangle()
{

}
double Triangle::perimetr(double a, double b, double c)
{
    return a + b + c;
}
double Triangle::area(double a, double h)
{
    return 0.5 * a * h;
}
double Triangle::side(double a, double b)
{
    c = pow(a, 2) + pow(b, 2);
    return sqrt(c);
}
double Triangle::corner(double a, double b, double c)
{
    return cos(a) * cos(c) / cos(a) * cos(b);
}