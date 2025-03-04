#include <iostream>

using namespace std;

int main()
{
    cout << "Costruzione di una matrice triangulare" << endl;

    int n;
    bool c = true;

    while(c)
    {
        cout << "Inserisci il numero de righe: ";
        cin >> n;

        if(n > 0)
        {
            c = false;
        }
        else
        {
            cout << "ERRORE";
        }
    }

    int* *M = new int*[n];

    for(int i=0;i<n;i++)
    {
        M[i]= new int[i+1];

        for(int j = 0; j<(i+1);j++)
        {
            M[i][j] = 0;
            cout << M[i][j];
        }

        cout << endl;
    }

    for(int i=0;i<n;i++)
    {
        delete[] M[i];
    }

    delete[] M;
}
