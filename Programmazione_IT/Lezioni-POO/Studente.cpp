#include <iostream>
#include <Studente.h>
using namespace std;

studente::studente(int m, string n, string cn) //Constructore de la classe studente
{
    studente::set_matricola(m);
    studente::set_nome(n);
    studente::set_cognome(cn);
}

int studente::get_matricola() //metodo di accesso GETTER al atributo "matricola"
{
    return studente::matricola;
}

void studente::set_matricola(int m) //metodo di accesso SETTER al atributo "matricola"
{
    studente::matricola = m;
}

string studente::get_nome() //metodo di accesso GETTER al atributo "matricola"
{
    return studente::nome;
}

void studente::set_nome(string n) //metodo di accesso SETTER al atributo "matricola"
{
    studente::nome = n;
}

string studente::get_cognome() //metodo di accesso GETTER al atributo "matricola"
{
    return studente::cognome;
}

void studente::set_cognome(string cgn) //metodo di accesso SETTER al atributo "matricola"
{
    studente::cognome = cgn;
}

void stampa()
{
    cout << get_matricola() << endl;
    cout << get_nome() << endl;
    cout << get_cognome() << endl << endl;
}
