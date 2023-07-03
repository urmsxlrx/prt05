#pragma once


class Triangle
{
public:
    Triangle(double h, double a, double b, double c);
    double perimetr(double a, double b, double c);
    double area(double a, double h);
    double side(double a, double b);
    double corner(double a, double b, double c);
    ~Triangle();
private:
    double h;
    double a, b, c;
};