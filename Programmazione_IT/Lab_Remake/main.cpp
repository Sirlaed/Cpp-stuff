#include <iostream>
#include <vector>
using namespace std;

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
