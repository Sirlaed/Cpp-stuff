#include <QCoreApplication>
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <cctype>
#include<ctype.h>

void Problema_2()
{
    int n;
    srand(time(NULL));
    for(int i = 0; i<3; i++)
    {
        int rand = 65 + std::rand()%(91-65);
        n=rand;
        char l = n;
        std::cout << l <<std::endl;
    }
}

void Problema_4()
{
    unsigned long long int i = 0;
    unsigned long long int p = 1;
    int ChnNum = 0;
    int num;
    std::string Chn;

    std::cout << "Ingrese su cadena: ";
    std::cin >> Chn;

    for(unsigned long long int j=1;j<Chn.length();j++)
    {p*=10;}

    for(i,p; i<Chn.length();i++,p/=10)
    {
        num = Chn[i];
        num -= 48;
        num *= p;
        ChnNum += num;
    }

    std::cout << ChnNum << std::endl;

}

void Problema_8()
{
    std::string Chn;
    std::string Chntxt = "";
    std::string Chnnum = "";

    std::cout << "Ingrese su cadena: ";
    std::cin >> Chn;

    for(unsigned long long int j=0;j<Chn.length();j++)
    {
        if(isalpha(Chn[j]))
        {Chntxt += Chn[j];}
        else
        {Chnnum += Chn[j];}
    }

    std::cout << Chntxt << std::endl << Chnnum <<std::endl;

}

void Problema_10()
{
    //bool c = true;
    //char RomNum[7] = {'M','D','C','L','X','V','I'};
    std::string Num;
    int ArNum = 0;
    int M,D,C,L,X,V,I;
    M = 1000;
    D = 500;
    C = 100;
    L = 50;
    X = 10;
    V = 5;
    I = 1;

    std::cout << "Ingrese un numero en romano";
    std::cin >> Num; //By now i gonna assume ideal inputs, but the validation idea is iterate over the string of "Num" and thencompare each element if is in the ararray "RomNum"

    for(unsigned long long int l = 0; l<Num.length();l++)
    {Num[l] = toupper(Num[l]);}


    for(unsigned long long int i = 0; i<Num.length() ;i++)
    {
        switch (Num[i])
        {
        case 'M':
        {
            ArNum+= M;
            break;
        }

        case 'D':
        {
            ArNum += D;
            break;
        }
        case 'C':
        {
            if(Num[i+1] == 'M')
            {
                ArNum += (M-C);
                i++;
            }
            else
            {
                if(Num[i+1] == 'D')
                {
                    ArNum += (D-C);
                    i++;
                }
                else
                {ArNum += C;}
            }
            break;
        }
        case 'L':
        {
            ArNum += L;
            break;
        }
        case 'X':
        {
            if(Num[i+1] == 'C')
            {
                ArNum += (C-X);
                i++;
            }
            else
            {
                if(Num[i+1] == 'L')
                {
                    ArNum += (L-X);
                    i++;
                }
                else
                {ArNum += X;}
            }
            break;
        }
        case 'V':
        {
            ArNum += V;
            break;
        }
        case 'I':
        {
            if(Num[i+1] == 'X')
            {
                ArNum += (X-I);
                i++;
            }
            else
            {
                if(Num[i+1] == 'V')
                {
                    ArNum += (V-I);
                    i++;
                }
                else
                {ArNum += I;}
            }
            break;

        default: std::cout << "No ingreso un numero romano valido";
            break;
        }

        }
    }

    std::cout << ArNum;

}
