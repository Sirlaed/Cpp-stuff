#include <QCoreApplication>
#include <iostream>
#include <string>
#include<Headers-pt2.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    bool c = true;


    while(c)
    {
        int option;
        std::cout << "Ingrese el numero del problema que desea ejecutar: ";
        std::cin >> option;

        switch(option)
        {
            case 2: Problema_2();
            break;

            case 4: Problema_4();
            break;

            case 6: 0;
            break;

            case 8: Problema_8();
            break;

            case 10: Problema_10();
            break;

            case 12:0;
            break;

            case 14:0;
            break;

            case 16:0;
            break;

            case 18:0;
            break;

            default: c=false;
        }
    }
}
