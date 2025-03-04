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

double max(vector<double> &v);
double media(vector<double> &v);
bool pseudo_in(vector<double> &v, double x);

int main()
{
    vector<double> v;
    bool c = true;
    char l;

    cout << "Inserici 0 per finire il processo de input" << endl;

    while(c)
    {
        double n;
        cin >> n;

        if(n == 0)
        {
            c = false;
        }
        else
        {
            v.push_back(n);
        }
    }

    cout << "La media degli valori de v e': " << media(v) << endl;
    cout << "Il maximo degli valori de v e': " << max(v) << endl << endl;

    cout<<"Vorrei trovare un numero in v? y/n ";
    cin >> l;

    if(l=='y')
    {
        double x;

        cout << "Inserici il valore a trovare: ";
        cin >> x;

        if(pseudo_in(v,x))
        {
            cout<< x <<" ci sta in v";
        }
        else
        {
            cout<< x <<" non ci sta in v";
        }
    }


}

double max(vector<double> &v)
{
    double max = 0;

    for(int i:v)
    {
        if(i>max)
        {
            max = i;
        }
    }

    return max;
}

double media(vector<double> &v)
{
    double media=0;

    for(int i:v)
    {
        media += i;
    }

    return media /= v.size();
}

bool pseudo_in(vector<double> &v, double x)
{
    for(int i:v)
    {
        if(x==i)
        {
            return true;
        }
    }

    return false;
}
--------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

vector<string> fusion(vector<string> &v1, vector<string> &v2);

int main()
{
    vector<string> v1 = {"Why","so","serious"};
    vector<string> v2 = {"mah","homie","?"};

    vector<string> vf = fusion(v1,v2);

    for(string i:vf)
    {
        cout << i << " ";
    }
}

vector<string> fusion(vector<string> &v1, vector<string> &v2)
{
    vector<string> vr;

    for(string i:v1)
    {
        vr.push_back(i);
    }

    for(string i:v2)
    {
        vr.push_back(i);
    }

    return vr;
}
---------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

vector<string> copia(vector<string> &v, int x);

int main()
{
    vector<string> v1 = {"Why","so","serious","?"};
    int n = 4;

    vector<string> vf = copia(v1,n);

    for(string i:vf)
    {
        cout << i << " ";
    }
}

vector<string> copia(vector<string> &v, int x)
{
    vector<string> vr((v.size())*x);
    int c = v.size();

    for(int i=0;i<x;i++)
    {
        for(int j=0; j<v.size();j++)
        {
            vr[j + c]= v[j];
        }

        c += v.size();
    }

    return vr;
}
-----------------------------------
#include <iostream>
#include <vector>
using namespace std;

vector<string> altrn(vector<string> &v1, vector<string> &v2);

int main()
{
    vector<string> v1 = {"Why","are","so","serious"};
    vector<string> v2 = {"mah","homie","?","!"};

    vector<string> vf = altrn(v1,v2);

    for(string i:vf)
    {
        cout << i << " ";
    }
}

vector<string> altrn(vector<string> &v1, vector<string> &v2)
{
    if(v1.size() != v2.size())
    {
        cerr<< "errore";
        exit(1);
    }

    vector<string> vr(v1.size() + v2.size());

    for(int i=0,j=0;i<vr.size();i+=2,j++)
    {
        vr[i] = v1[j];
        vr[i+1] = v2[j];
    }

    return vr;
}
--------------------------------------------------------------------------

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f;

    f.open("C:/Users/user/Documents/Vainas/Programacion/C++-stuff/Programmazione_IT/Other-archives/lista.txt", ios::in);

    if(f.fail())
    {
        cerr << "Non ho potuto aprire il file" << endl;
        exit(1);
    }
    string linea;
    getline(f,linea);
    int t = 0;

    while(!f.eof())
    {
        int p,q;

        f >> p >> q>> ws;
        cout << "Ho letto " << p << " " << q << endl;

        t += p*q;
    }

    cout << "Il totale e': " << t << endl;

    f.close();
}

-------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    fstream f;

    f.open("C:/Users/user/Documents/Vainas/Programacion/C++-stuff/Programmazione_IT/Other-archives/citti.txt", ios::in);

    if(f.fail())
    {
        cerr << "Non ho potuto aprire il file" << endl;
        exit(1);
    }

    vector<string> citta;

    while(!f.eof())
    {
        string nc;
        f>> nc >> ws;
        citta.push_back(nc);
    }

    f.close();

    for(string s : citta)
    {
        cout << s << " ";
    }

    cout << endl;

    sort(citta.begin(),citta.end());

    for(string s : citta)
    {
        cout << s << " ";
    }

}

------------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <vector>
#include <prodotto.h>

using namespace std;

int main()
{
    fstream f;

    f.open("C:/Users/user/Documents/Vainas/Programacion/C++-stuff/Programmazione_IT/Other-archives/magazino.txt", ios::in);

    if(f.fail())
    {
        cerr << "Non ho potuto aprire il file" << endl;
        exit(1);
    }

    vector<prodotto> prod;
    string l;
    getline(f,l);

    while(!f.eof())
    {
        int c;
        string d;
        double p;
        int q;

        f >> c >> d >> p >> q >> ws;

        prodotto n(c,d,p,q);

        prod.push_back(n);
    }

    f.close();

}

-------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <random>
#define DR = "C:/Users/user/Documents/Vainas/Programacion/C++-stuff/Programmazione_IT/Other-archives/the_fuck.txt"

using namespace std;

int main()
{
    mt19937 generatore;
    uniform_int_distribution<int> distribuzione(1,20);

    fstream f;

    f.open("DR", ios::out);

    if(f.fail())
    {
        cerr << "Non ho potuto aprire il file" << endl;
        exit(1);
    }

    int num_r = 100;

    for(int i = 0; i<num_r;i++)
    {
        int n1,n2;

        n1=distribuzione(generatore);
        n2=distribuzione(generatore);

        f << n1 << "  " << n2 << endl;
    }

    f.close();

    cout << "File hecho";
}

-------------------------------------------------------------------------------

es 1 (lez 3/12)

#include <iostream>
#include <fstream>
#include <vector>
#define DR "C:/Users/user/Documents/Vainas/Programacion/C++-stuff/Programmazione_IT/Other-archives/nazioni.txt"

using namespace std;

int main()
{
    fstream f;

    f.open(DR, ios::in);

    if(f.fail())
    {
        cerr << "Non ho potuto aprire il file " << endl;
        exit(1);
    }


    string l;
    getline(f,l);

    while(!f.eof())
    {
        string PS;
        int NA;
        int SP;

        f >> PS >> NA >> SP >> ws ;

        double DA = NA/SP;

        cout << "Paese: " << PS << endl << "Densita: " << DA << endl << endl ;

    }
    f.close();

}

--------------------------------------------------------------------------------------------------------------------

 Esercizi

 1) Scrivere un programma che legge un file composto da tre colonne: nome della nazione,
    numero di abitanti e superficie.
    Il programma deve calcolare per ogni nazione la densità di abitanti (numero di abitanti/superficie) e scrivere sullo schermo i nomi delle nazioni e le densità

 2) Scrivere un programma che apre il file inventario.txt e che scrive nel file
    prodotti_selezionati.txt solo i dati dei prodotti che costano meno
    di una cifra indicata dall'utente.
    Ci riuscite a farlo senza usare un vector ? Ovviamente bisogna tenere
    due fstream aperte, una per leggere e una per scrivere.

 3) Scrivere un programma che legge dei dati di automobili da un file e che li memorizza all'interno di un vector.
    Usando il vector trovare la macchina più costosa e quella meno costosa.

 4) Scrivere un programma che legge da un file testo una sequenza di stringhe che devono essere memorizzate in un vector.
    Ordinare le stringhe con sort e poi scrivere in un secondo file le stringhe ordinate.


#include <iostream>
#include <fstream>
#include <vector>
#define DRin "C:/Users/user/Documents/Vainas/Programacion/C++-stuff/Programmazione_IT/Other-archives/inventario.txt"
#define DRout "C:/Users/user/Documents/Vainas/Programacion/C++-stuff/Programmazione_IT/Other-archives/prodotti_selezionati.txt"

using namespace std;

int main()
{
    fstream Inven;
    fstream ProdSel;

    Inven.open(DRin,ios::in);

    if(Inven.fail())
    {
        cerr << ": Errore: In archive not open";
        exit(1);
    }


    ProdSel.open(DRout, ios::out);

    if(ProdSel.fail())
    {
        cerr << ": Errore: Out archive not open";
        exit(2);
    }
    ProdSel << "Codice " << "Descrip " << "Prezzo " << "Quantita" << endl;

    double pmax;

    cout << "Inserici il prezzo che vorrei: "<< endl;
    cin >> pmax;

    string l;
    getline(Inven,l);


    while(!(Inven.eof()))
    {
        int c;
        string d;
        double p;
        int q;

        Inven >> c >> d >> p >> q >> ws;

        if(p<pmax)
        {
            cout <<"entra" << endl;
            ProdSel << c << " " << d << " " << p << " " << q << endl;
        }
    }

    Inven.close();
    ProdSel.close();
}
----------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class persona
{
protected:

    string nome;
    string cognome;
    string DN;

public:

    persona();
    persona(string n, string c, string d)
    {
        nome = n;
        cognome = c;
        DN = d;
    }

    void print()
    {
        cout << nome << endl << cognome << endl << DN << endl;
    }
};

class studente : public persona
{
private:

    string matricola;
    string corso;

public:

    studente();
    studente(string n, string c, string d, string m, string cl) : persona(n,c,d)
    {
        matricola = m;
        corso = cl;
    }

    void print()
    {
        persona::print();
        cout << matricola << endl << corso << endl;
    }
};

int main()
{
    studente s("Rei", "Ayanami", "15/6/1990", "69696969", "eva pilot");
    persona p("Shinji", "Ikari", "26/3/2001");

    p.print();
    s.print();

    persona p2 = s;

    p2.print();
}
--------------------------------------------------------------------------------------------------------------------------------

POLIMORFISMO

Exclusivo para apuntadores, necesita metodos virtuales (virtual) y la herencia entre clases, osea, que solo el polimofismo
es posible entre clases padre/hija

#include <iostream>

using namespace std;

class persona
{
protected:

    string nome;
    string cognome;
    string DN;

public:

    persona();
    persona(string n, string c, string d)
    {
        nome = n;
        cognome = c;
        DN = d;
    }

    virtual void print()
    {
        cout << nome << endl << cognome << endl << DN << endl;
    }
};

class studente : public persona
{
private:

    string matricola;
    string corso;

public:

    studente();
    studente(string n, string c, string d, string m, string cl) : persona(n,c,d)
    {
        matricola = m;
        corso = cl;
    }

    virtual void print()
    {
        persona::print();
        cout << matricola << endl << corso << endl;
    }
};

int main()
{
    string scelta;
    cin >> scelta;
    persona *p;

    if(scelta[0] == 's')
    {
        p= new studente ("Rei", "Ayanami", "15/6/1990", "69696969", "eva pilot");
    }
    else if(scelta[0] == 'p')
    {
        p = new persona ("Shinji", "Ikari", "26/3/2001");
    }

    p->print();

}

---------------------------------------------------------------------------------


 */

