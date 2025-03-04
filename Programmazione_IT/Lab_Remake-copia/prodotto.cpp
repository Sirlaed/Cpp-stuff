#include "prodotto.h"
#include <iostream>

prodotto::prodotto(int c, string d, double p, int q) : code(c), des(d), prez(p), quan(q)
{}

int prodotto::get_code()
{
    return code;
}

string prodotto::get_des()
{
    return des;
}

double prodotto::get_prez()
{
    return prez;
}

int prodotto::get_quan()
{
    return quan;
}

void prodotto::print()
{
    this->get_code();
    this->get_des();
    this->get_prez();
    this->get_quan();
}
