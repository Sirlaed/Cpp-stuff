#include <iostream>


int main(){
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

    int Num1;
    int Num2;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> Num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> Num2;
    unsigned int aux = Num1;

    for(int i=2;i<=Num2;i++){

        aux = Num1*aux;
    }

    std::cout << aux;

    //Ejercicio 8
    /*
    int Num1;
    int Num2;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> Num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> Num2;
    */
}
