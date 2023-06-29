#pragma once

class trapezoid
{
public:
    trapezoid(double h, double a, double b, double c, double d, double D1, double D2, double A);
    double perimetr(double a, double b, double c, double d);
    double ploshad(double a, double h, double b);
    double storona(double a, double b, double h, double D1, double D2, double A);
    double ugol(double a, double h, double c);
    ~trapezoid();
private:
    double weight, h;
    double a, b, c, d, D1, D2, A;
};
