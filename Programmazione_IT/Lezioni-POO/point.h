#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;

class point
{
private:
    int x;
    int y;

public:
    point(int _x, int _y);
    point();

    void set_x(int _x);
    void set_y(int _y);
    int get_x() const;
    int get_y() const;

    static point sum(point p1, point p2);
    void print();

    point operator+(const point &other);
    void operator+=(const point &other);
    friend ostream& operator<<(ostream &os, const point p);
    friend istream& operator>>(istream &is, point &p);
    bool operator == (const point);

};

#endif // POINT_H
