#include <QCoreApplication>
#include <iostream>
#include <string>
int main()
{

    //Ejercicio 2

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


    //Ejercicio 4

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


    //Ejercicio 6

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


    //Ejercicio 8

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

    //Ejercicio 10

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

    //Ejercicio 12

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

    //Ejercicio 14

    int CUp = 1;
    int CDw = 50;
    std::string Spc = "   ";
    for(int i = 1; i<= 50; i++)
    {
        std::cout << CUp << Spc << CDw << "\n";
        CUp++;
        CDw--;
    }

}
