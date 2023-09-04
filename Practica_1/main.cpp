#include <QCoreApplication>
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{

    //Ejercicio 2----------------------------------------------------------------------------------------------------------------------------------------


    /*
    int Num;
    std::cout << "Ingrese un numero: ";
    std::cin >> Num;
    std::cout << "\n";
    if(Num%2 == 0){
        std::cout << Num << " Es par";
    }
    else{
        std::cout << Num << " Es impar";
    }
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 4----------------------------------------------------------------------------------------------------------------------------------------


    /*
    int Num1;
    int Num2;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> Num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> Num2;

    if (Num1 > Num2){
        std::cout << Num2;
    }
    else{
        std::cout << Num1;
    }
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 6----------------------------------------------------------------------------------------------------------------------------------------


    /*
    int Num1;
    int Num2;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> Num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> Num2;
    unsigned int aux = Num1;
    //¿Por que aux? porque ya que las potencias pares nunca tienen numeros negastivos es
    //preferible ampliar lo maximo posible los valores a tomar por si hay un crcimiento exponencial

    for(int i=2;i<=Num2;i++){

        aux = Num1*aux;
    }
    std::cout << aux;
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 8----------------------------------------------------------------------------------------------------------------------------------------


    /*
    int Num;
    long int Fact = 1;
    std::cout << "Ingrese un numero: ";
    std::cin >> Num;
    do
    {
        Fact = Fact*Num*(Num-1);
        Num = Num - 2;
        if (Num == 1)
        {
            Num = -1;
        }

    }
    while(Num > 0);
    std::cout << Fact;
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 10----------------------------------------------------------------------------------------------------------------------------------------


    /*
    int Num;
    int cont = 1;
    int M = 0;
    std::cout << "Ingrese un numero: ";
    std::cin >> Num;
    do
    {
        M = Num*cont;
        cont++;
        std::cout << M << "\n";
    }
    while (M < 100);
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 12----------------------------------------------------------------------------------------------------------------------------------------


    /*
    int Num;
    int P = 0;
    std::cout << "Ingrese un numero: ";
    std::cin >> Num;
    for(int i = 1;i < (Num*Num*Num*Num*Num);i*=Num)
    {
        P = Num*i;
        std::cout << P << "\n";
    }
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 14----------------------------------------------------------------------------------------------------------------------------------------


    /*
    int CUp = 1;
    int CDw = 50;
    std::string Spc = "   ";
    for(int i = 1; i<= 50; i++)
    {
        std::cout << CUp << Spc << CDw << "\n";
        CUp++;
        CDw--;
    }
    */
    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 16----------------------------------------------------------------------------------------------------------------------------------------

    /*
    int Lim = 1;
    int cont = 0;
    int Sum = 0;
    while (Lim != 0)
    {
        std::cout << "Ingrese un numero: ";
        std::cin >> Lim;
        std::cout << "\n";
        cont++;
        Sum+= Lim;
    }
    if ((Lim == 0) && (Sum == 0))
    {
        std::cout << "No hay promedio que calcular";
    }
    else
    {
        std::cout << "El promedio es: " << (Sum)/(cont-1);
    }
    */
    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 18----------------------------------------------------------------------------------------------------------------------------------------


    /*
    int Num;
    std::cout << "Ingrese un numero: ";
    std::cin >> Num;
    std::cout << "\n";
    int x = sqrt(Num);
        if((x*x) == Num)
    {
        std::cout << Num << " Es cuadrado perfecto";
    }
    else
    {
        std::cout << Num << " No es cuadrado perfecto";
    }
    */
    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 20----------------------------------------------------------------------------------------------------------------------------------------


    /*
    std::string Num;
    bool c = true;
    std::cout << "Ingrese un numero: ";
    std::cin >> Num;
    int l = Num.length();
    for(int i = 0; i<= (l/2); i++)
    {
        if(Num[i] != Num[(l-1)-i])
        {
            std::cout << Num << " No es palindromo";
            c = false;
            break;
        }
    }

    if (c)
    {
        std::cout << Num << " Es palindromo";
    }
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 22----------------------------------------------------------------------------------------------------------------------------------------


    /*
    int Seg,Hours,Min,Time;
    std::cout << "Ingrese una cantidad de segundos: ";
    std::cin >> Time;
    std::cout << "\n";

    Hours = Time/3600;
    Time= Time%3600;
    Min = Time/60;
    Seg = Time%60;

    std::cout << Hours << ":" << Min << ":" << Seg;
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 24----------------------------------------------------------------------------------------------------------------------------------------

    /*
    int lado;
    std::cout << "Ingrese el largo del lado del cuadrado: ";
    std::cin >> lado;
    std::cout << "\n";
    std::string simb,spc;

    for(int i = 0; i < lado;i++)
    {
        simb = simb + "+";
    }

    std::cout << simb << "\n";

    for(int i = 0; i < (lado-2);i++)
    {
        spc = spc + " ";
    }

    for(int i = 0; i < (lado-2);i++)
    {
        std::cout << "+"<< spc << "+" << "\n" ;
    }

    std::cout << simb << "\n";
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 26----------------------------------------------------------------------------------------------------------------------------------------

    /*
    int l1,l2,l3;
    std::cout << "Ingrese el largo del 1er lado: ";
    std::cin >> l1;
    std::cout << "Ingrese el largo del 2do lado: ";
    std::cin >> l2;
    std::cout << "Ingrese el largo del 3er lado: ";
    std::cin >> l3;

    if((!(l1 <=(l2+l3)))||(!(l2 <=(l1+l3)))||(!(l3 <=(l1+l2))))
    {
        std::cout << "No se puede formar un triangulo";
    }
    else
    {
        if((l1==l2)&&(l2==l3))
        {
            std::cout << "Se forma un triangulo equilatero";
        }
        else
        {
            if((l1!=l2)&&(l2!=l3)&&(l1!=l3))
            {
                std::cout << "Se forma un triangulo escaleno";
            }
            else
            {
                std::cout << "Se forma un triangulo isoceles";
            }
        }
    }
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Ejercicio 30----------------------------------------------------------------------------------------------------------------------------------------

    /*
    int RN,El,c;
    RN = 101;
    El = 102;
    c = 0;
    while((RN > 100))
    {
        RN = rand();
    }

    while(RN!=El)
    {
        c++;
        std::cout << "Ingrese un numero: ";
        std::cin >> El;
        if(El==RN)
        {
            std::cout << "Haz adivinado el numero GG" << "\n";
        }
        else
        {
            if(El<RN)
            {
                std::cout << "Su numero es menor al numero random" << "\n";
            }
            else
            {
                std::cout << "Su numero es mayor al numero random" << "\n";
            }
        }
    }

    std::cout << "Intentaste " << c << " veces" << "\n";
    */

    //----------------------------------------------------------------------------------------------------------------------------------------------------
    //Problema 2----------------------------------------------------------------------------------------------------------------------------------------

    /*
    float t = 0;
    float R = 0;
    float f = 1;
    float a = 1;
    float S = 0;
    int N = 0;

    while (N<=0)
    {
        std::cout << "Cuantos terminos de la serie quiere calcular? ";
        std::cin >> N;
    }


    for(int i = 0; i<(N-1);i++)
    {
        t = 1/(f*a);
        f = f * a;
        a++;
        S = S + t;
    }

    R = (1 + S);

    std::cout << "e es aproximadamente: " << R;
    */


    return 0;
}
