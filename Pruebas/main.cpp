#include <QCoreApplication>
#include <iostream>
void patron4();

int main()
{
    patron4();
}

void patron4()
/*Genera el patron 4*/
{
    int LnPtr4[8]={};
    int* pnt, pnt2;

    for(int posAr = 0;posAr<8;posAr++)
    {
        if(posAr<4)
        {LnPtr4[posAr]=1;}
        else
        {LnPtr4[posAr]=0;}
    }
    pnt = &LnPtr4[0];
    for(int ps= 0;ps<8;ps++)
    {
        std::cout << *pnt;
        pnt++;
        //digitalWrite(pinClock,HIGH);
        //digitalWrite(pinClock, LOW);
    }
}
