/*LEZIONI 7(17/10) -------------------------------------------------------------------------------------------------------------

ARRAYs

int main()
{
    int x[5]={};

    for(int i=0; i<5;i++)
    {
        cin >> x[i];
    }

    cout << endl;

    for(int i=0; i<5;i++)
    {
        cout << x[i] << endl;
    }
}

#include <iostream>
using namespace std;



int main()
{
    const int dim = 10;
    int x[dim] = {1,2,3,4,5,6,7,8,9,10};
    int Sum=0;
    int Prod=1;

    for(int i=0; i<dim;i++)
    {
        cin >> x[i];
    }

cout << endl;

for(int i=0; i<dim;i++)
{
    Sum += x[i];
}

for(int i=0; i<dim;i++)
{
    Prod *= x[i];
}


cout <<"Suma="<< Sum << endl;
cout <<"Prodotto="<< Prod;
}


 */
