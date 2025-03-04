#include <motore.h>
#include <iostream>
using namespace std;

motore::motore(int c)
{
    cilindri = c;
}

int motore::get_cilindri()
{
    return cilindri;
}

void motore::stampa()
{
    cout << "Num cilindri: " << cilindri << endl;
}


