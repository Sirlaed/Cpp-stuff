#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<shape.h>
#include <iostream>

class rectangle : public shape
{
public:
    rectangle(double _b,double _h);

    void print();
    double area();
    double perimetro();

};

#endif // RECTANGLE_H
