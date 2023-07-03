#pragma once
class Rectangle
{
public:
    Rectangle(double length, double width);
    double perimeter(double lenght, double width);
    double area(double lenght, double width);
    double diagonal(double lenght, double width);
    ~Rectangle();
private:
    double length;
    double width;
};