#include <iostream>
#include <Studente.h>

using namespace std;

studente::studente(int m, string n, string cn, int t) : test(t) //Constructore de la classe studente
{
    this->matricola = m;                      // con il " : ...(n)" se define il valore di un atributo constate in il constructore
    this->nome = n;
    this->cognome = cn;

    //this solo essiste dentro dei metodi no dentro delle funzione amici/non amici

    //stampa() == this->stampa();
}

studente::~studente()
{cout << "disttrutore"<< endl;}

int studente::get_matricola() //metodo di accesso GETTER al atributo "matricola"
{
    return studente::matricola;
}

void studente::set_matricola(int m) //metodo di accesso SETTER al atributo "matricola"
{
    if(m<0)
    {
        matricola = 1;
    }
    else
    {
        matricola = m;
    }

}

string studente::get_nome() //metodo di accesso GETTER al atributo "matricola"
{
    return studente::nome;
}

void studente::set_nome(string n) //metodo di accesso SETTER al atributo "matricola"
{
    nome = n;
}

string studente::get_cognome() //metodo di accesso GETTER al atributo "matricola"
{
    return studente::cognome;
}

void studente::set_cognome(string cgn) //metodo di accesso SETTER al atributo "matricola"
{
    cognome = cgn;
}

int studente::get_test() const
{
    return test;
}

void studente::stampa()
{
    cout << get_matricola() << endl;
    cout << get_nome() << endl;
    cout << get_cognome() << endl;
    cout << get_test() << endl<<endl;
}

void set_n  (studente& s, string n)
{
    s.nome = n;
}
