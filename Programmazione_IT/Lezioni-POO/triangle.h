#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include<shape.h>

//Ereditarieta singola publica
class triangle : public shape
{
private:

    double side_a;
    double side_b;
    double side_c;

public:

    triangle(double _b, double _h);
    triangle(double a, double b, double c);

    void print();
    double area();
    double perimetro();
};

#endif // TRIANGLE_H
