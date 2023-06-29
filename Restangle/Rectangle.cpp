#include "Figure.h"
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

double Rectangle::perimeter()
{
    return 2 * (length + width);
}

double Rectangle::area()
{
    return length * width;
}

double Rectangle::diagonal()
{
    return sqrt(pow(length, 2) + pow(width, 2));
}
