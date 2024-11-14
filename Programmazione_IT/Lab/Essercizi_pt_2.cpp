/*
1----------------------------------------------------------
#include <iostream>
using namespace std;

int minor(int a, int b, int c);

int main()
{
    int a,b,c;

    cout << "Inserici il valore de ogni numeri: " << endl;
    cin >> a >> b >> c;

    int m = minor(a,b,c);

    cout << "Il minore e': " << m << endl;

    return 0;
}

int minor(int a, int b, int c)
{


    if(a<b)
    {
        if(a<c)
        {return a;}

        else
        {return c;}
    }
    else
    {
        if(b<c)
        {return b;}

        else
        {return c;}
    }

}

2--------------------------------------------------------

#include <iostream>
using namespace std;

void Coniug(string s);

int main()
{
    string verbo;

    cout << "Inserici il verbo all'infinito: ";
    cin >> verbo;

    Coniug(verbo);

}

void Coniug(string s)
{
    int l = s.length();
    string term [6] = {"o","i","a","iamo","ete","ano"};
    string raiz = s.substr(0,l-3);

    for(int i=0;i<6;i++)
    {
        cout << raiz << term[i] << endl;
    }


    cout << raiz << 'o' << endl;
    cout << raiz << 'i' << endl;
    cout << raiz << 'a' << endl;
    cout << raiz << "iamo" << endl;
    cout << raiz << "ete" << endl;
    cout << raiz << "ano" << endl;

}
3------------------------------------------------------------------------
#include <iostream>
using namespace std;

void crt(string s);

int main()
{
    string s;

    cout << "Inserici una parola: ";
    cin >> s;

    crt(s);
}

void crt(string s)
{
    int l = s.length();

    for(int i=l;i>0;i--)
    {
        cout << s.substr(0,i)<< endl;
    }

    cout << endl; //pt 2

    for(int i=0;i<l;i++)
    {
        cout << s.substr(i,l)<< endl;
    }

}

4------------------------------------------------

#include <iostream>
using namespace std;

double opt (double x, double y, char c);

int main()
{
    double x,y;
    char op;
    bool c = true;

    while(c)
    {
        cout << "Inserici il primo numero: ";
        cin >> x;

        cout << "Che operazioni vorrei fa? +: somma, -: differenza, *: prodotto, /: divisione" << endl;
        cin >> op;

        cout << "Inserici il secondo numero: ";
        cin >> y;

        if(op == '/' && y == 0)
        {
            cout << "ERROR: No se poi fare una divizione per 0" << endl;
        }
        else
        {
            c = false;
        }
    }


    cout << "Il resultado e': " << opt(x,y,op) << endl;
}


double opt (double x, double y, char c)
{
    switch (c)
    {
    case '+':
        return x+y;

    case '-':
        return x-y;

    case '*':
        return x*y;

    case '/':
        return x/y;

    default:
        cout << "Operatore non riconosciuto" << endl;
        return -1;
    }
}

5---------------------------

#include <iostream>
using namespace std;

int Sumatoria(int x, int y);

int main()
{
    int x,y;

    cout << "Inserici il primo numero: ";
    cin >> x;

    cout << "Inserici il secondo numero: ";
    cin >> y;

    cout << "La somma e': " << Sumatoria(x,y);
}

int Sumatoria (int x, int y)
{
    int Sum = 0;

    if(x>y)
        swap(x,y);

    for(int i=x;i<=y;i++)
    {
        Sum += i;
    }

    return Sum;
}

6-----------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

unsigned long long int pot(int x);

int main()
{
    int n;

    cout << "Inserici la potenza maxima: ";
    cin >> n;

    cout << "La somma delle potenze e': " << pot(n)<< endl;

}

unsigned long long int pot(int x) //a partir de 62 hay overflow
{
    unsigned long long int R =0;

    for(int i=0;i<=x;i++)
    {
        R += pow(2,i);
    }

    return R;
}

7--------------------------------------------

#include <iostream>
using namespace std;

void RcBl(int b, int h);

int main()
{
    int n1,n2;

    //verificar q input no sea <0

    cout << "Inserisci la base del rettangolo: ";
    cin >> n1;

    cout << "Inserisci l'altezza del rettangolo: ";
    cin >> n2;

    cout << endl;

    RcBl(n1,n2);

}

void RcBl(int b, int h)
{

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<< '*';
        }

        cout << endl;
    }

}
-------------------------------------------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

int minor(int a, int b, int c);//ej1
void Coniug(string s);//ej2
void crt(string s);//ej3
double opt (double x, double y, char c);//ej4
int Sumatoria(int x, int y);//ej5
unsigned long long int pot(int x);//ej6
void RcBl(int b, int h);//ej7

int main()
{
    bool c = true;
    int n = 0;

    while(c)
    {
        cout << "Inserire il numero dell'esercizio da rivedere (tra 1 e 7): ";
        cin >> n;

        if(n>=1 && n<=7)
        {
            c = false;
        }
        else
        {
            cout << "Esercizio non valido"<< endl;;
        }
    }

    switch (n)
    {
        case 1:
        {
           int a,b,c;

           cout << "Inserici il valore de ogni numeri: " << endl;
           cin >> a >> b >> c;

           int m = minor(a,b,c);

           cout << "Il minore e': " << m << endl;

           break;
        }

        case 2:
        {
           string verbo;

           cout << "Inserici il verbo all'infinito: ";
           cin >> verbo;

           Coniug(verbo);

           break;
        }

        case 3:
        {
           string s;

           cout << "Inserici una parola: ";
           cin >> s;

           crt(s);

           break;
        }

        case 4:
        {
           double x,y;
           char op;
           bool c = true;

           while(c)
           {
                cout << "Inserici il primo numero: ";
                cin >> x;

                cout << "Che operazioni vorrei fa? +: somma, -: differenza, *: prodotto, /: divisione" << endl;
                cin >> op;

                cout << "Inserici il secondo numero: ";
                cin >> y;

                if(op == '/' && y == 0)
                {
                    cout << "ERROR: No se poi fare una divizione per 0" << endl;
                }
                else
                {
                    c = false;
                }
           }


           cout << "Il resultado e': " << opt(x,y,op) << endl;

           break;
        }

        case 5:
        {
           int x,y;

           cout << "Inserici il primo numero: ";
           cin >> x;

           cout << "Inserici il secondo numero: ";
           cin >> y;

           cout << "La somma e': " << Sumatoria(x,y);

           break;
        }

        case 6:
        {
           int n;
           bool c = true;

           while(c)
           {
                cout << "Inserici la potenza maxima: ";
                cin >> n;

                if(n<0)
                {
                    cout << "ERROR: Inserisci un numero positivo";
                }
                else
                {
                    c = false;
                }
           }


           cout << "La somma delle potenze e': " << pot(n)<< endl;

           break;
        }

        case 7:
        {
           int n1,n2;
           bool c = true;

           while(c)
           {
                cout << "Inserisci la base del rettangolo: ";
                cin >> n1;

                cout << "Inserisci l'altezza del rettangolo: ";
                cin >> n2;

                if(n1<0 || n2<0)
                {
                    cout << "Dimensione non valida"<< endl;
                }
                else
                {
                    c =  false;
                }
           }

           cout << endl;

           RcBl(n1,n2);

           break;
        }
    }
}


int minor(int a, int b, int c)
{
    if(a<b)
    {
        if(a<c)
        {return a;}

        else
        {return c;}
    }
    else
    {
        if(b<c)
        {return b;}

        else
        {return c;}
    }
}

void Coniug(string s)
{
    int l = s.length();
    string term [6] = {"o","i","a","iamo","ete","ano"};
    string raiz = s.substr(0,l-3);

    for(int i=0;i<6;i++)
    {
        cout << raiz << term[i] << endl;
    }


    cout << raiz << 'o' << endl;
    cout << raiz << 'i' << endl;
    cout << raiz << 'a' << endl;
    cout << raiz << "iamo" << endl;
    cout << raiz << "ete" << endl;
    cout << raiz << "ano" << endl;

}

void crt(string s)
{
    int l = s.length();

    for(int i=l;i>0;i--)
    {
        cout << s.substr(0,i)<< endl;
    }

    cout << endl; //pt 2

    for(int i=0;i<l;i++)
    {
        cout << s.substr(i,l)<< endl;
    }

}

double opt (double x, double y, char c)
{
    switch (c)
    {
    case '+':
        return x+y;

    case '-':
        return x-y;

    case '*':
        return x*y;

    case '/':
        return x/y;

    default:
        cout << "Operatore non riconosciuto" << endl;
        return -1;
    }
}

int Sumatoria (int x, int y)
{
    int Sum = 0;

    if(x>y)
        swap(x,y);

    for(int i=x;i<=y;i++)
    {
        Sum += i;
    }

    return Sum;
}

unsigned long long int pot(int x) //a partir de 62 hay overflow
{
    unsigned long long int R =0;

    for(int i=0;i<=x;i++)
    {
        R += pow(2,i);
    }

    return R;
}

void RcBl(int b, int h)
{

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<< '*';
        }

        cout << endl;
    }

}

*/
