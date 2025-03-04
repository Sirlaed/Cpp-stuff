#include <compagnia.h>
#include <iostream>
#include <vector>
#include <fstream>

compagnia::compagnia()
{
}

compagnia::compagnia(string s)
{

    fstream f;

    f.open(s,ios::in);

    if(f.fail())
    {
        cout << "ERROR: Non si posso aprire il file" << endl;
        exit(1);
    }

    string l;
    getline(f,l);

    string code, aero_d, aero_a;
    float time_d, time_a;

    while(f >> code >> aero_d >> aero_a >> time_d >> time_a)
    {
        insericsi(code,aero_d,aero_a,time_d,time_a);
    }

    f.close();
}

void compagnia::set_volo(voli v)
{
    vuelos.push_back(v);
}

void compagnia::insericsi(string c,string ad,string aa,float td, float ta)
{
    voli v (c,ad,aa,td,ta);
    set_volo(v);
}

void compagnia::visualizza()
{
    for(voli i : vuelos)
    {
        cout << "Volo code: " << i.get_code() << endl;
        cout << "Parte da: " << i.get_aerod() << " con destinazione: " << i.get_aeroa() << endl;
        cout << "Parte alle " << i.get_timed() << " e arriva alle " << i.get_timea() << endl;
        cout << "--------------------------------------------------" << endl;
    }

    cout << endl;
}

vector<string> compagnia::cerca_voli(string s)
{
    vector<string> r;

    for(voli i : vuelos)
    {
        if(i.get_aerod() == s)
        {
            r.push_back(i.get_code());
        }
    }

    return r;
}

string compagnia::volo_piu_lungo()
{
    string code;
    int index = 0;
    float max_d = (vuelos[0].get_timea())-(vuelos[0].get_timed());

    for(size_t i = 1; i<vuelos.size();i++)
    {
        int t = (vuelos[i].get_timea())-(vuelos[i].get_timed());

        if(t > max_d)
        {
            max_d = t;
            index = i;
        }
    }

    return vuelos[index].get_code();
}

void compagnia::salva(string s)
{
    fstream f;

    f.open(s,ios::out);

    if(f.fail())
    {
        cout << "ERROR: Non si posso aprire il file" << endl;
        exit(1);
    }

    f << "Code" << "        " << "Departure" << "       " << "Destination" <<  "       " << "Departure time" <<  "       " << "Arrival" << "\n";

    for(voli i : vuelos)
    {
        f << i.get_code() <<  "        "  << i.get_aerod() <<  "        " << i.get_aeroa() << "        " << i.get_timed() << "        "  << i.get_timea() << "\n";
    }

    f.close();
}

bool compagnia::collegati(string s1, string s2)
{
    for(voli i : vuelos)
    {
        if(i.get_aerod() == s1 && i.get_aeroa() == s2)
        {
            return true;
        }
    }

    return false;
}



















