#include "Rectangle.h"
#include <iostream>
#include <cmath>

Rectangle::Rectangle(double length, double width)
{
    this->length = length;
    this->width = width;
}

Rectangle::~Rectangle()
{
}

double Rectangle::perimeter(double lenght, double width)
{
    return 2 * (length + width);
}

double Rectangle::area(double lenght, double width)
{
    return lenght * width;
}

double Rectangle::diagonal(double lenght, double width)
{
    return sqrt(pow(length, 2) + pow(width, 2));
}
