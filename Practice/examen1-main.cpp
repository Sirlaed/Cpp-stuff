/*
#include <iostream>
#include <compagnia.h>
#include <vector>
#define pthin "C:/Users/user/Documents/Vainas/Programacion/C++-stuff/Practice/vuelos_practice.txt"
#define pthout "C:/Users/user/Documents/Vainas/Programacion/C++-stuff/Practice/vuelos_save_practice.txt"
#define aero1 "Tokyo"
#define aero2 "Barajas"
using namespace std;

int main()
{
    compagnia c0;
    compagnia c1 (pthin);

    c1.visualizza();

    vector<string> r = c1.cerca_voli(aero1);

    cout << "I voli che partonno de " << aero1 << " sono: " << endl;

    for(size_t i = 0; i<r.size();i++)
    {
        cout << r[i] << endl;
    }

    cout << endl << endl;

    cout << "Il volo piu lungo della compagnia e' il: " << c1.volo_piu_lungo();

    cout << endl << endl;

    c1.salva(pthout);

    if(c1.collegati(aero1, aero2))
    {
        cout << "C'e un volo da " << aero1 << " a " << aero2 << endl;
    }
    else
    {
        cout << "Non c'e un volo tra questi aeroporti" << endl;
    }

}
*/
