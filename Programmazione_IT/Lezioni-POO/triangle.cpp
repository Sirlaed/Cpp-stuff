#include "triangle.h"
#include <iostream>

triangle::triangle(double _b, double _h) : shape(_b,_h)
{}

triangle::triangle(double a, double b, double c) : shape()
{
    side_a=a;
    side_b=b;
    side_c=c;
}

double triangle::area()
{
    return (get_b()*get_h())*0.5;
}

double triangle::perimetro()
{
    return side_a+side_b+side_c;
}
