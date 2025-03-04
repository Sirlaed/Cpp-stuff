#ifndef PRODOTTO_H
#define PRODOTTO_H
#include <iostream>

using namespace std;

class prodotto
{
private:

    int code;
    string des;
    double prez;
    int quan;

public:

    prodotto(int c = -1, string d = "NA", double p = -1, int q = -1);

    int get_code();
    string get_des();
    double get_prez();
    int get_quan();

    void print();

};

#endif // PRODOTTO_H
