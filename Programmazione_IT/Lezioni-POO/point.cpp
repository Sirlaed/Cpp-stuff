#include <point.h>
#include <iostream>

using namespace std;

point::point(int _x ,int _y) : x(_x), y (_y)
{}

point::point()
{}

void point::set_x(int _x)
{
    x = _x;
}

void point::set_y(int _y)
{
    y = _y;
}

int point::get_x() const
{
    return x;
}

int point::get_y() const
{
    return y;
}

void point::print()
{
    cout << "(" << x << ", " << y << ")" <<endl;

}

point point::sum(point p1, point p2)
{
    int x1 = p1.get_x();
    int x2 = p2.get_x();
    int y1 = p1.get_y();
    int y2 = p2.get_y();

    point tmp(x1+x2,y1+y2);

    return tmp;

}

point point::operator+(const point &other)
{
    int x1 = this->get_x();
    int y1 = this->get_y();
    int x2 = other.get_x();
    int y2 = other.get_y();

    point tmp(x1+x2,y1+y2);

    return tmp;
}

void point::operator+=(const point &other)
{
    int x2 = other.get_x();
    int y2 = other.get_y();

    this->set_x((this->get_x())+x2);
    this->set_y((this->get_y())+y2);
}

ostream& operator << (ostream &os, const point p)
{
    os << "(" << p.x << ", " << p.y << ")" <<endl;

    return os;
}

istream& operator >> (istream &is, point &p)
{
    is >> p.x >> p.y;

    return is;
}


bool point::operator==(const point other)
{
    if((other.get_x() == this->x) && (other.get_y() == this->y))
    {
        return true;
    }

    return false;
}

