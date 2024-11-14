/*

#include<iostream>
#include<random>
using namespace std;

string lttnumero(int n);
string unita(int u);
string decen(int d);
string n10t19(int xd);

int main()
{
    int n;

    cout << "Inserici un numero: ";
    cin >> n;

    cout << lttnumero(n);
}

string lttnumero(int n)
{
    if(n<=9)
    {
        return unita(n);
    }
    else if (n>=10 && n<=19)
    {
        return n10t19(n);
    }
    else
    {
        int dec = n/10;
        int un = n%10;

        string s1 = decen(dec);
        string s2 = unita(un);

        if(un == 1 || un == 8)
        {
            return s1.substr(0,s1.length()-1) + s2;
        }
        else
        {
            return s1+s2;
        }
    }
}

string unita(int u)
{
    switch (u)
    {
    case 1: return "uno";

    case 2: return "due";

    case 3: return "tre";

    case 4: return "quatro";

    case 5: return "cinque";

    case 6: return "sei";

    case 7: return "sete";

    case 8: return "otto";

    case 9: return "nove";

    default: return "";
    }
}

string decen(int n)
{
    switch (n)
    {
    case 2: return "veinti";

    case 3: return "treinta";

    case 4: return "quaranta";

    case 5: return "cinquanta";

    case 6: return "sesanta";

    case 7: return "setanta";

    case 8: return "ottanta";

    case 9: return "novanta";
    }
}

string n10t19(int xd)
{
    switch (xd)
    {
    case 10: return "dieci";

    case 11: return "undici";

    case 12: return "duodici";

    case 13: return "tredici";

    case 14: return "quattordici";

    case 15: return "quindici";

    case 16: return "sedici";

    case 17: return "diciassette";

    case 18: return "diciotto";

    case 19: return "dicianove";
    }
}


-------------------------------------------------------------------------------------

#include<iostream>
#include<random>
using namespace std;

mt19937 generator;

int Da2()
{
    uniform_int_distribution<int> dado(1,6);
    return dado(generator);
}

int main()
{
    int n;

    cout<<"Quanta volte vorrei lanciare il dado? ";
    cin >> n;

    generator.seed(time(0));

    for(int i=0; i<n; i++)
    {
        cout << Da2()<< " ";
    }

}

---------------------------------------------------

#include<iostream>
#include<random>
using namespace std;

mt19937 generator;

int CAS()
{
    uniform_int_distribution<int> rou(1,100);
    return rou(generator);
}

int main()
{
    int c = 0;
    generator.seed(time(0));

    while (true)
    {
        cout << CAS() <<endl;
    }
}

------------------------------------------------------

void maxmin (double a, double b, double* ptmax, double* ptmin);

int main()
{
    double a,b;
    double max, min;

    cout << "Inserici il valore di a: ";
    cin >> a;

    cout << "Inserici il valore di a: ";
    cin >> b;


    maxmin(a,b,&max, &min);

    cout << "Il massimo e': " << max << " e il minimo e': " << min << endl;
}

void maxmin (double a, double b, double *ptmax, double *ptmin)
{
    if(a>b)
    {
        *ptmax = a;
        *ptmin = b;
    }
    else
    {
        *ptmax = b;
        *ptmin = a;
    }

}

-----------------------------------------------
#define T 10
void seign(int arr[T], int N, int* p_plus, int* p0, int* p_minus);

int main()
{
    int v[T];
    int c_plus = 0, c_zero = 0, c_minus = 0;

    cout << "Inserici " << T << " valori: " << endl;

    for(int i=0; i<T;i++)
    {
        cin >> v[i];
    }

    seign(v,T,&c_plus,&c_zero,&c_minus);

    cout << "c'e " << c_plus << " numeri positivi" << endl;
    cout << "c'e " << c_minus << " numeri negativi" << endl;
    cout << "c'e " << c_zero << " zeri" << endl;
}

void seign(int arr[T], int N, int* p_plus, int* p0, int* p_minus)
{
    *p_plus = 0;
    *p_minus = 0;
    *p0 = 0;
    for(int i=0; i<T;i++)
    {
        if(arr[i] > 0)
        {
            ++ *p_plus;
        }
        else if(arr[i] < 0)
        {
            ++ *p_minus ;
        }
        else
        {
            ++ *p0;
        }
    }
}

--------------------------------------------------------------------------------------------------
#include <vector>

I Vector

Struttura dati implementatta in C++ che fornische una versione semplificata e potenziata degli array dinamici

SI PUO RIDIMENSIONARI AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH

suporta una forma diversa di for

como for in v[] e itera sobre los elementos de un array

OPERAZIONI:

size(): Dimensioone actuale
push_back(x): Inserici x in fondo al vector, aumenta la dimensione en 1
clear(): Elimina tutti gli elementi
pop_back(): Elimina l'ultimo elemento
resize(n): Redimensiona il vector, facendo diventare n la dimensione



void leggi_v(vector<int> &v);
void sv(vector<int> &v);
void svi(vector<int> &v);
int somma_v(vector<int> &v);
v.begin(): iteratore che se riferisce al primo elemento
v.end(): iteratore che riferisce ad un elemento fittizio dopo l'ultimo
v.front(): primo elemento
v.

int main()
{
    vector<int> v; // vector<int> v (cosi e' vuoto) vector<int> v(x) (cosi inizia con 'x' elementi)

    leggi_v(v);
    sv(v);
    svi(v);
    somma_v(v);
}

void leggi_v(vector<int> &v)
{
    int n;

    cout << "Quanti elementi vuoi inserire? ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int dato;
        cin >> dato;
        v.push_back(dato);
    }
}

void leggi_v(vector<int> &v)
{
    bool c = true;

    while(c)
    {
        int dato;
        cin >> dato;

        if(dato == 0)
        {
            c = false;
        }
        else
        {
           v.push_back(dato);
        }
    }
}

void sv(vector<int> &v)
{
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<< " ";
    }
}

void svi(vector<int> &v)
{
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<< " ";
    }
}

int somma_v(vector<int> &v)
{
    int somma = 0;

    for(int x:v)
    {
        somma += x;
    }

    return somma;
}

-------------------------------------------------------------------------------------------------



 */

