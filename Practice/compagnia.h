#ifndef COMPAGNIA_H
#define COMPAGNIA_H
#include <voli.h>
#include <vector>
#include <iostream>
#include <iostream>
using namespace std;

class compagnia
{
private:

    vector<voli> vuelos;

public:
    compagnia();
    compagnia(string s);
    void insericsi(string c,string ad,string aa,float td, float ta);
    void set_volo(voli v);
    void visualizza();
    vector<string> cerca_voli(string s);
    string volo_piu_lungo();
    void salva(string s);
    bool collegati(string s1, string s2);

};

#endif
