#include <iostream>
#include <cmath> //sqrt (raiz cuadrada)
using namespace std;

/*
int ej1();
int ej2();
int ej3();
int ej4();

int ej1()
{
    int anno;
    bool c = true;

    while (c)
    {
        cout << "Inserici un anno: ";
        cin >> anno;

        if(anno > 0)
        {
            c = false;
        }
        else
        {
            cout << "----ANNO NO VALIDO----" << endl;
        }
    }

    if(anno%4 == 0)
    {
        if(anno%100 == 0)
        {
            if(anno%400 == 0)
            {
                cout << anno << " e' bisestile";
            }
            else
            {
                cout << anno << " non e' bisestile";
            }
        }
        else
        {
            cout << anno << " e' bisestile";
        }
    }
    else
    {
        cout << anno << " non e' bisestile";
    }

    return 0;
}

int ej2()
{
    double l1,l2,l3;

    do
    {
        cout << "Inserici il valore de ogni lati: " << endl;
        cin >> l1 >> l2 >> l3;

        if(l1<=0 || l2<=0 || l3<=0)
        {
            cout << "----LATI NON VALIDI----" << endl;
        }

    }
    while(l1<=0 || l2<=0 || l3<=0);

    if(l1==l2 && l2==l3)
    {
        cout << "Il triangolo e' equilatero";
    }
    else
    {
        if(l1==l2 || l2==l3 || l1==l3)
        {
            cout << "Il triangolo e' isoscele";
        }
        else
        {
            cout << "Il triangolo e' scaleno";
        }
    }

    return 0;

}

int ej3()
{
    int h1,m1,h2,m2;

    do
    {
        cout << "Inserici il valore de ogni ore: " << endl;
        cin >> h1 >> h2;

        if(h1<0 || h2<0 || h1>23 || h2>23)
        {
            cout << "----ORE NON VALIDI----" << endl;
        }

    }
    while(h1<0 || h2<0 || h1>23 || h2>23);

    do
    {
        cout << "Inserici il valore de ogni minuti: " << endl;
        cin >> m1 >> m2;

        if(m1<0 || m2<0 || m1>59 || m2>59)
        {
            cout << "----MINUTI NON VALIDI----" << endl;
        }

    }
    while(m1<0 || m2<0 || m1>59 || m2>59);

    if(h1 == h2)
    {
        if(m1 == m2)
        {
            cout << "Due instanti coincidono";
        }
        else if (m2 > m1)
        {
            cout << "il primo istante e' prima";
        }
        else
        {
            cout << "il secondo istante e' prima";
        }
    }
    else if (h1 < h2)
    {
        cout << "il primo istante e' prima";
    }
    else
    {
        cout << "il secondo istante e' prima";
    }


    return 0;
}

int ej4()
{
    int a,b,c;

    cout << "Inserici il valore de ogni coefficienti: " << endl;
    cin >> a >> b >> c;

    if(())
        }
*/

