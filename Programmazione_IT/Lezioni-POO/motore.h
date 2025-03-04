#ifndef MOTORE_H
#define MOTORE_H

#include <iostream>
using namespace std;

class motore
{
private:

    int cilindri;

public:
    motore(int c = -1);
    void stampa();
    int get_cilindri();
};

#endif // MOTORE_H
