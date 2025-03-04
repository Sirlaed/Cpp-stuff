#include "rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle(double _b,double _h) : shape(_b,_h)
{}

void rectangle::print()
{
    cout << "Base: " << get_b() << endl << "Altezza: " << get_h() << endl;
}

double rectangle::area()
{
    return get_b()*get_h();
}

double rectangle::perimetro()
{
    return (2*get_b())+(2*get_h());
}
