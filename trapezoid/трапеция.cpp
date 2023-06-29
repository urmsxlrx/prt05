#include "Figure.h"
#include <iostream>
#include <cmath>

trapezoid::trapezoid(double h, double a, double b, double с, double d, double D1, double D2, double A)
{
    this->h = h;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->D1 = D1;
    this->D2 = D2;
    this->A = A;

}
trapezoid::~trapezoid()
{

}
double trapezoid::perimetr(double a, double b, double c, double d)
{
    return a + b + c + d;
}
double trapezoid::ploshad(double a, double h, double b)
{
    return (a + b) * h;
}
double trapezoid::storona(double a, double b, double h, double A, double D1, double D2)
{
    a = ((D1 + D2) / h) * sin(A) - b;
    return a;
}
double trapezoid::ugol(double A, double h, double c)
{
    sin(A) = h / c;
    return sin(A);
}
