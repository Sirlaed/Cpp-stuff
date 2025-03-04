#ifndef COUNT_H
#define COUNT_H

#include <iostream>
using namespace std;


class count
{

    friend void set_x(count& c, int v);
    //Dicchiarazione di una funzione friend/amica, sempre il primo parametro é un riferimento a un oggeto de la clase a la che pertence la funzione
    //E se posso dichiarare fuori di public/private/protected

private:

    int x;

public:
    count(int v = 0);
    void set_x(int n);
    void stampa();

};

//void set_x_nonfriend(count& c, int v);
//Funzione non friend non ha piu senso perche dipenden di altri metodi de la classe, quindi, e meglio usare directamente i metodi che fare una funzione "non friend"
//e anche le funzione friend posso essere un problema a lo stesso che le variabile globale

#endif // COUNT_H
