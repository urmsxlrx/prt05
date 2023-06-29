#pragma once

class Triangle
{
public:
    Triangle(double h, double a, double b, double c);
    double perimetr(double a, double b, double c);
    double ploshad(double a, double h);
    double storona(double a, double b);
    double ugol(double a, double b, double c);
    ~Triangle();
private:
    double weight, h;
    double a, b, c;
};