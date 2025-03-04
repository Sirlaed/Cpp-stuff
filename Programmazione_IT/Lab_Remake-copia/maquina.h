#ifndef MAQUINA_H
#define MAQUINA_H
#include <iostream>

using namespace std;

class Maquina
{
private:
    string targa;
    string colore;
    float cilindrata;
    float cavalli;

public:
    Maquina(string targa, string colore, float cilindrata, float cavalli);
};

#endif // MAQUINA_H
