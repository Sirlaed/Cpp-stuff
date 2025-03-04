/*

EJERCICIO 1------------------------------------------------------------------------

#include <iostream>
#define n 9
using namespace std;

int max(int* v);
int sc_max(int* v, int m);
int find_in(int* v, int in);
void specchio(int *v);

int main()
{
    int V[n]={0,10,2,4,30,20,15,1000,-1000};

    int m = max(V);

    cout << m << endl;
    cout << sc_max(V,m)<< endl;

    int in;
    cout << "Inserisci il numero che vuoi trovare nell' array: ";
    cin >> in;

    cout << "L'indice de " << in << "nell' array e' " << find_in(V, in)<< endl;

    for(int i=0; i<n;i++)
    {
        cout << V[i] << " ";
    }

    cout << endl;
    specchio(V);

    for(int i=0; i<n;i++)
    {
        cout << V[i] << " ";
    }
}

int max(int* v)
{
    int max = v[0];

    for(int i = 1; i<n; i++)
    {
        if(v[i]>max)
        {
            max = v[i];
        }
    }

    return max;
}

int sc_max(int* v, int m)
{
    int scmax = v[0];

    for(int i = 1; i<n; i++)
    {
        if(v[i]>scmax && v[i]<m)
        {
            scmax = v[i];
        }
    }

    return scmax;
}

int find_in(int* v, int in)
{
    int index = -1;

    for(int i = 0; i<n; i++)
    {
        if(in == v[i])
        {
            index = i;
            return index;
        }
    }

    return index;
}

void specchio(int *v)
{
    for(int i=0; i<=(n/2)-1;i++)
    {
        int aux = v[i];
        v[i]= v[(n-1)-i];
        v[(n-1)-i] = aux;
    }
}

EJERCICIO 2------------------------------------------------------------------------

#include <iostream>
#define n 3
using namespace std;

bool simmetria(int a[][n]);

int main()
{
    int A[n][n] = {{2,4,6},{4,3,5},{6,5,9}};

    if(simmetria(A))
    {
        cout << "La matrice A e'simmetrica" << endl;
    }
    else
    {
        cout << "La matrice A non e'simmetrica" << endl;
    }
}

bool simmetria(int a[][n])
{
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                return false;
            }

        }
    }

    return true;
}

*/
