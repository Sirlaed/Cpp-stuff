#ifndef STUDENTE_H
#define STUDENTE_H

//Solo sta la firme degli metodi e la definizione della classe

#include <iostream>

using namespace std;

class studente
{

private: //Specificatori de accesso che identifica a gli elementio che solo se podreve veddere dentro de la classe

    // Una buona praxi es poner los atributos en privado y los metodos en public

    int matricola;
    string nome;
    string cognome;

public: //Specificatori de accesso che identifica a gli elementio che se podreve veddere in qualcuna parte dil codice

    studente(int m, string n, string cn); //Constructore de la classe studente
    int get_matricola(); //metodo di accesso GETTER al atributo "matricola"
    void set_matricola(int m); //metodo di accesso SETTER al atributo "matricola"
    string get_nome(); //metodo di accesso GETTER al atributo "matricola"
    void set_nome(string n); //metodo di accesso SETTER al atributo "matricola"
    string get_cognome(); //metodo di accesso GETTER al atributo "matricola"
    void set_cognome(string cgn); //metodo di accesso SETTER al atributo "matricola"
    void stampa();


};

#endif // STUDENTE_H
