//LEZIONI 2(26/09) -------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int fsum(int x, int y);//Funcion de practica del uso de variables
int optest(int x, int y);//Funcion de practica del uso de operadores
bool iftest(int x, int y);//Funcion de practica de condicionales
void input(int x, int y);


void input(int x, int y)
{

    cout << "Enter the 1st integer: ";
    cin >> x;

    cout << "Enter the 2nd integer: ";
    cin >> y;

}

int fsum (int x, int y)
{
    int sum; // Ha un valore random perche non se ha specificato qualche valore

    sum = x + y;

    cout << "Sum is " << sum << endl;

    return 0;
}

int optest (int x, int y)
{
    int sum, prdc, diff, dv, mod;

    sum = x+y;
    prdc = x*y;
    diff = x-y;
    dv = x/y;
    mod= x%y;

    cout << "La somma e': "<< sum << endl;
    cout << "Il prodotto e': " << prdc << endl;
    cout << "La differenaza e': " << diff << endl;
    cout << "La divisione intera e': " << dv << endl;
    cout << "Il modulo e': " << mod << endl;

    return 0;
}

bool iftest(int x, int y)//la logica es igualmente aplicable a cualquier operador racional (<,>.<=.>=,==,!=)
{

    if(x == y)
    {
        return true;
    }

    else
    {
        return false;
    }
}
