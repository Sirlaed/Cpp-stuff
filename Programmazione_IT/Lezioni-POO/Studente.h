#ifndef STUDENTE_H
#define STUDENTE_H

//IN queste archivo solo sta la firme degli metodi e la definizione della classe

#include <iostream>

using namespace std;

class studente
{
    friend void set_n(studente& s, string n);

private: //Specificatori de accesso che identifica a gli elementio che solo se podreve veddere dentro de la classe

    // Una buona praxi es poner los atributi en privado y los metodos en public

    int matricola;
    string nome;
    string cognome;

    //Tutti di sopra sono atributi nonConstanti

    const int test;

public: //Specificatori de accesso che identifica a gli elementio che se podreve veddere in qualcuna parte dil codice

    studente(int m = -1, string n = "NA", string cn = "NA", int t = -1); //Constructore de la classe studente
    ~studente();//Serve per rilocare memoria e pulire suo uso

    int get_matricola(); //metodo di accesso GETTER al atributo "matricola"
    void set_matricola(int m); //metodo di accesso SETTER al atributo "matricola"
    string get_nome(); //metodo di accesso GETTER al atributo "matricola"
    void set_nome(string n); //metodo di accesso SETTER al atributo "matricola"
    string get_cognome(); //metodo di accesso GETTER al atributo "matricola"
    void set_cognome(string cgn); //metodo di accesso SETTER al atributo "matricola"
    void stampa();

    //Tutti di sopra sono metodi nonConstanti

    int get_test() const; //I metodi const, posso essere essequibile per oggetti const e non const ma oggetti const solo posso essere essequibile per metodi const
};

#endif // STUDENTE_H
