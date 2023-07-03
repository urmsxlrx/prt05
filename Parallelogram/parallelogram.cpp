#include "parallelogram.h"
#include <cmath>

Parallelogram::Parallelogram(double h, double a, double b, double D, double d, double ya)
{
    this->h = h;
    this->a = a;
    this->b = b;
    this->D = D;
    this->d = d;
    this->ya = ya;
}
Parallelogram::~Parallelogram()
{

}
double Parallelogram::perimetr(double a, double b, double c)
{
    return 2 * a + 2 * b;
}
double Parallelogram::area(double a, double h)
{
    return a * h;
}
double Parallelogram::side(double a, double D, double d, double ya)
{
    return 0.5 * sqrt(pow(D, 2) + pow(d, 2) - (2 * D * d) * cos(ya));
}
double Parallelogram::corner(double ya)
{
    return 180 - ya;
}