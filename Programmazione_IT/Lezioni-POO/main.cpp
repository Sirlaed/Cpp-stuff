#include <iostream>
#include "Studente.h"

using namespace std;

int main()
{
    studente s1(13456,"Quien","Sos");
    studente s2(95764,"Why","SoSerious");

    s1.stampa();
    s2.stampa();



    /* Creare oggetti sensa constructore-----------
    studente s1;
    s1.set_matricola(13456);
    s1.set_nome("Quien");
    s1.set_cognome("Sos");

    s1.stampa();

    studente s2;
    s2.set_matricola(95764);
    s2.set_nome("Why");
    s2.set_cognome("SoSerious");

    s2.stampa();
    */
}

