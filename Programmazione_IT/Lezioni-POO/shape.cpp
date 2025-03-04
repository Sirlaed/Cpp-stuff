#include<shape.h>
#include<iostream>

using namespace std;

shape::shape(double _b, double _h) : b(_b), h(_h)
{}

double shape::get_b() const
{
    return b;
}

double shape::get_h() const
{
    return h;
}

void shape::set_b(double _b)
{
    b = _b;
}

void shape::set_h(double _h)
{
    h = _h;
}

void shape::print()
{
    cout << "Questo e' un oggeto di Shape" << endl;
    cout << "Base: " << b << endl << "Altezza: " << h << endl;
}

double shape::area()
{
    return 0;
}

double shape::perimetro()
{
    return 0;
}
