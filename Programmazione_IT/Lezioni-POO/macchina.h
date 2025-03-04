#ifndef MACCHINA_H
#define MACCHINA_H

#include <iostream>
#include <motore.h>
using namespace std;

class macchina
{
    private:

    string modello;
    motore engine;

public:

    macchina(string mod = "",motore m = -1);
    void stampa();
    int get_cilindri_ma();
    motore get_engine();
};

#endif // MACCHINA_H
