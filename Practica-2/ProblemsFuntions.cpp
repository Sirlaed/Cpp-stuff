#include <QCoreApplication>
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <cctype>
#include <ctype.h>

void Problema_2()
{
    int count = 0;
    char letters[200]={};
    char ltt = 'A';
    srand(time(NULL));
    for(int i = 0; i<200; i++)
    {
        int rand = 65 + std::rand()%(91-65);
        char l = rand;
        letters[i] = l;
    }

    for(int j = 0; j<200; j++)
    {
        std::cout << letters[j];
    }

    std::sort(letters,letters + 200);
    std::cout << std::endl;

    for(int i = 0; i<200; i++)
    {
        if((letters[i]) == (ltt))
        {
            count++;
        }
        else
        {
            std::cout << ltt << ":" << count << std::endl;
            ltt++;
            count = 1;
        }
    }

    std::cout << std::endl;
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

    for(i; i<Chn.length();i++,p/=10)
    {
        num = Chn[i];
        num -= 48;
        num *= p;
        ChnNum += num;
    }

    std::cout << ChnNum << std::endl;

}

void Problema_6()
{
    std::string thing;
    std::cout << "Ingrese una cadena: ";
    std::cin >> thing;
    std::cout << "Original: " << thing << std::endl;

    for(int i = 0; i<thing.length();i++)
    {
        if(isalpha(thing[i]))
        {
            thing[i] = toupper(thing[i]);
        }
    }
    std::cout << "Modifided: " << thing << std::endl;

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
    std::cin >> Num; //By now i gonna assume ideal inputs, but the validation idea is iterate over the string of "Num" and the compare each element if is in the ararray "RomNum"

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

        default: std::cout << "No ingreso un numero romano valido" << std::endl;
            break;
        }

        }
    }

    std::cout << ArNum << std::endl;

}

void Problema_12()
{
    int Size = 3,Elm,f1,f2,f3,c1,c2,c3,d1 = 0,d2 = 0;
    int MagicCB[3][3]={};
    bool c = true;

    for(int i = 0; i<Size;i++)
    {
        for(int u = 0; u<Size;u++)
        {
            std::cout << "Ingrese un numero: ";
            std::cin >> Elm;
            MagicCB[i][u] = Elm;
        }
    }

    for(int f = 0; f<Size; f++)
    {
        for(int c = 0; c<Size;c++){std::cout << MagicCB[f][c];}

        std::cout << std::endl;
    }

    while(c)
    {
        for(int f = 0; f<Size; f++)
        {
            switch (f)
            {
            case 0: f1 = (MagicCB[f][0])+(MagicCB[f][1])+(MagicCB[f][2]);
                break;
            case 1: f2 = (MagicCB[f][0])+(MagicCB[f][1])+(MagicCB[f][2]);
                break;
            case 2: f3 = (MagicCB[f][0])+(MagicCB[f][1])+(MagicCB[f][2]);
                break;
            }
        }

        if((f1)==(f2)&&((f2)==(f3)))
        {
            for(int c = 0; c<Size; c++)
            {
                switch (c)
                {
                case 0: c1 = (MagicCB[0][c])+(MagicCB[1][c])+(MagicCB[2][c]);
                    break;
                case 1: c2 = (MagicCB[0][c])+(MagicCB[1][c])+(MagicCB[2][c]);
                    break;
                case 2: c3 = (MagicCB[0][c])+(MagicCB[1][c])+(MagicCB[2][c]);
                    break;
                }
            }
            if((c1)==(c2)&&((c2)==(c3)))
            {
                for(int d = 0,b = 0;d<Size;d++,b++)
                {d1 = d1 + (MagicCB[d][b]);}

                for(int d = 0,b = 2;d<Size;d++,b--)
                {d2 = d2 + (MagicCB[d][b]);}

                if((d1)==(d2))
                {
                    if((f1)==(c1)&&((c1)==(d1)))
                    {
                        std::cout << "Su matriz es un cuadrado magico"<< std::endl;
                        c = false;
                    }
                }
                else
                {
                    std::cout << "Su matriz NO es un cuadrado magico"<< std::endl;
                    c = false;
                }
            }
            else
            {
                std::cout << "Su matriz NO es un cuadrado magico"<< std::endl;
                c = false;
            }
        }
        else
        {
            std::cout << "Su matriz NO es un cuadrado magico"<< std::endl;
            c = false;
        }
    }
}

void Problema_14()
{
    int Matriz[5][5]={};
    int fill = 1;

    for(int f = 0; f<5;f++)
    {
        for(int c = 0; c<5;c++)
        {
            Matriz[f][c] = fill;
            fill++;
        }
    }

    for(int f = 0; f<5; f++)
    {
        for(int c = 0; c<5;c++){std::cout << Matriz[f][c];}
        std::cout << std::endl;
    }

}

void Problema_16()
{

}
void Problema_18()
{
    bool c = true;
    int NUMBER[10] = {0,1,2,3,4,5,6,7,8,9};
    int* pos = &NUMBER[0];
    unsigned int CotInf = 0,CotSup = 0,n,cont = 1,CFact,RCotInf = 0;
    int Num = 9;
    CFact = 1;

    do
    {
        CFact = CFact*Num*(Num-1);
        Num = Num - 2;
        if (Num == 1)
        {
            Num = -1;
        }

    }
    while(Num > 0);

    std::cout << "Ingrese el valor de la permutacion deseada: ";
    std::cin >> n;

    Num = 9;

    while(c)
    {
        for(int i = 0,j = 1;j <= 10; i++,j++)
        {
            CotInf = ((CFact * i)+1+RCotInf);
            CotSup = (CotInf + (CFact - 1));

            if((CotInf <= n)&&(n <= CotSup))
            {
                if(NUMBER[cont-1] == i)
                {
                    break;
                }
                else
                {
                    *pos = i;
                    cont++;
                    RCotInf = CotInf;
                }
            }
        }

        CFact = CFact/Num;
        Num--;

        if(Num == 0)
        {Num = 1;}

        if(pos == &NUMBER[9])
        {
         c = false;
        }
        else
        {
         pos++;
        }

    }

    std::cout << "La permutacion " << n << " tiene el valor de ";
    for(int u = 0;u<10;u++)
    {std::cout << NUMBER[u];}

    std::cout << std::endl;
}
