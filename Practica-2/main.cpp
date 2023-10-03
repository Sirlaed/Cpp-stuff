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

            case 6: Problema_6();
            break;

            case 8: Problema_8();
            break;

            case 10: Problema_10();
            break;

            case 12:Problema_12();
            break;

            case 14: Problema_14();
            break;

            case 16: Problema_16();
            break;

            case 18: Problema_18();
            break;

            default: c=false;
        }
    }
}
