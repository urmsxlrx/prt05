#pragma once
class Parallelogram
{
public:
    Parallelogram(double h, double a, double b, double D, double d, double ya);
    double perimetr(double a, double b, double c);
    double ploshad(double a, double h);
    double storona(double a, double D, double d, double ya);
    double ugol(double ya);
    ~Parallelogram();
private:
    double h, a, b, D, d, ya;
};