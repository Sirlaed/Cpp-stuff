#include "count.h"

count::count(int v) : x(v){}

void count::set_x(int n)
{
    x = n;
}

void count::stampa()
{
    cout << "x= " << x << endl;
}

//funzione friend

void set_x(count& c, int v)
{
    c.x=v;
}

/*
void set_x_nonfriend(count& c, int v)
{
    c.set_x(v);
}
*/
