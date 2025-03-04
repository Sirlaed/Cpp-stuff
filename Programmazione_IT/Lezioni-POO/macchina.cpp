#include <macchina.h>
#include <iostream>
#include <macchina.h>
using namespace std;

macchina::macchina(string mod, motore m) : engine(m)
{
    modello = mod;
}

void macchina::stampa()
{
    cout << "Macchina"<< endl;
    cout << "Modello: " << modello << endl;
    cout << "Motore: " << engine.get_cilindri() << endl;
}

int macchina::get_cilindri_ma()
{
    return engine.get_cilindri();
}

motore macchina::get_engine()
{
    return engine;
}
