#pragma once


class trapezoid
{
public:
    trapezoid(double h, double a, double b, double c, double d, double D1, double D2, double A);
    double perimetr(double a, double b, double c, double d);
    double area(double a, double h, double b);
    double side(double a, double b, double h, double D1, double D2, double A);
    double corner(double a, double h, double c);
    ~trapezoid();
private:
    double  h;
    double a, b, c, d, D1, D2, A;
};