/*

Lezione 14/11---------------------------------------

#include <iostream>
#include "Studente.h"

using namespace std;

int main()
{
    studente s1(13456,"Quien","Sos");
    studente s2(95764,"Why","SoSerious");

    s1.stampa();
    s2.stampa();

    Creare oggetti sensa constructore-----------
    (
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
    )

}

----------------------------Lezione 19/11----------------------------------

#include <iostream>
#include <Studente.h>

using namespace std;

int main()
{
    studente s1(13456,"Quien","Sos");
    studente s2(95764,"Why","SoSerious");
    studente s3 = s2;

    s3.set_matricola(6913420);
    s3.set_cognome("Not2Serious");

    cout << "S1: " << endl;
    s1.stampa();

    cout << "S2: " << endl;
    s2.stampa();

    cout << "S3: " << endl;
    s3.stampa();
}

----------------------------Lezione 21/11------------------------------------------

#include <iostream>
#include <Studente.h>

using namespace std;

int main()
{
    studente s1(-13456,"Quien","Sos");
    studente s2(95764,"Why","SoSerious");
    studente s3 = s2;

    const studente sc(-45879,"Guibel","Puta Gorda",23);

    //consts.set_matricola() ----- ERRORE, perche non e un metodi const (Lo stesso per li altri metodi non const)

    s3.set_matricola(6913420);
    s3.set_cognome("Not2Serious");

    cout << "S1: " << endl;
    s1.stampa();

    cout << "S2: " << endl;
    s2.stampa();

    cout << "S3: " << endl;
    s3.stampa();

    cout << "Sc: " << endl;
    cout << sc.get_test()<<endl;
}
========================================================

#include <iostream>
#include <macchina.h>
#include <motore.h>

using namespace std;

int main()
{
    macchina m("Porsche", 14);
    m.stampa();

    int c = m.get_cilindri_ma();

    cout << c << endl;

    motore e = m.get_engine();
    e.stampa();
}

----------------------------Lezioni 22/11--------------------------------------------------------

#include <iostream>
#include <count.h>

using namespace std;

int main()
{
    cout << "Esempio friend" << endl;
    count c1(10);
    c1.stampa();

    c1.set_x(5);
    c1.stampa();

    set_x(c1,-5);
    c1.stampa();
}
========================================================

#include <iostream>
#include <Studente.h>
#include <count.h>
#include <macchina.h>
#include <motore.h>

using namespace std;

int main()
{
    //s2 é un puntatore di tipo "studente" e usa "->" invece de "." per esseguire i metodi o accedere a i atributi
    studente* s2= new studente(165489,"Why","so");
    s2->stampa();//s2.stampa() == ERRORE
    delete s2;

}

----------------------------Lezione 25/11--------------------------------------------------
creacion de arrays dinamicos

#include <iostream>

using namespace std;

int main()
{
    cout << "Esempio allocazione dinamica" << endl;

    int n;

    cout << "Inserici n: ";
    cin >> n;

    int *v = new int[n];

    for(int i=0;i<n;i++)
    {
        cout << "Ins: ";
        cin >> v[i];
    }

    for(int i=0;i<n;i++)
    {
        cout << v[i] << ", ";
    }

    delete[] v; //diallocazione di vettore/array

    //int V[n]; ERRORE per n non essere un valore constante
}
===============================================================
creacion de matrices

#include <iostream>

using namespace std;

int main()
{
    cout << "Esempio allocazione dinamica di una matrice" << endl;

    int n;//righe
    int m;//colonne

    cout << "Inserisci il numero de righe: ";
    cin >> n;

    cout << "Inserisci il numero de colonne: ";
    cin >> m;

    int* *M = new int*[n];

    for(int i=0;i<n;i++)
    {
        M[i] = new int[m];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> M[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << M[i][j] << " ";
        }
    }
}

==============================================================
creacion de matrices dinamicos

#include <iostream>

using namespace std;

int main()
{
    cout << "Costruzione di una matrice triangulare" << endl;

    int n;
    bool c = true;

    while(c)
    {
        cout << "Inserisci il numero de righe: ";
        cin >> n;

        if(n > 0)
        {
            c = false;
        }
        else
        {
            cout << "ERRORE";
        }
    }

    int* *M = new int*[n];

    for(int i=0;i<n;i++)
    {
        M[i]= new int[i+1];

        for(int j = 0; j<(i+1);j++)
        {
            M[i][j] = 0;
            cout << M[i][j];
        }

        cout << endl;
    }

    for(int i=0;i<n;i++)
    {
        delete[] M[i];
    }

    delete[] M;
}

----------------------------Lezione 28/11--------------------------------------------------
La mayoria de cosas estan en point.h y point.cpp
Redeclaracion de operadores

#include <iostream>
#include<point.h>

using namespace std;

int main()
{
    point p0;
    cout << "Inserici punto: ";
    cin >> p0;
    cout << "Punto inserito" << endl;
    cout << p0;

}

----------------------------Lezione 2/12--------------------------------------------------
Inicios de herencia--

Eredietarieta singola (cada clase tiene un padre y un hijo) e Eredietarieta multipla (Una case puede tener varios padres y varios hijos)

----------------------------Lezione 5/12--------------------------------------------------

protected: Al externo de las clases los atributos son privados pero a la hora de heredar los atributos a otras clases se convierten en publicos

#include <iostream>
#include <rectangle.h>

using namespace std;

int main()
{
    rectangle r(5,10);

    r.print();
    cout << "Area: " << r.area() << endl;
    cout << "Perimetro" << r.perimetro() << endl;
}

==================================================================================================

#include <iostream>


using namespace std;

int main()
{
    int t = 5;
    int n = 2;

    double r = t/n;

    cout << r << endl;

    r = static_cast<double>(t)/n;//forma de cambiar el tipo de variable

    cout << r << endl;

}

*/
