#pragma once
class Parallelogram
{
public:
    Parallelogram(double h, double a, double b, double D, double d, double ya);
    double perimetr(double a, double b, double c);
    double area(double a, double h);
    double side(double a, double D, double d, double ya);
    double corner(double ya);
    ~Parallelogram();
private:
    double h, a, b, D, d, ya;
};