/*LEZIONI 4(03/10) -------------------------------------------------------------------------------------------------------------

//Asignacione operatore x (+,-,*,/,%)= N
//Crecemento/Decrecemento unitario x++/x-- (Prima legge il valore dopo incrementa) , ++x/--x (Primo incrementa dopo legge il valore)

int Contatoretest()
{
    int i = 0;
    int a = 10;

    ++i;
    a = i;

    cout << a << endl << i << endl;
}

*/

/*

int n=1;

while (n<=5)
{
    cout << "n= " << n << endl;
    n++;
}


cout << "------------------------------------" << endl;

for(int i = 1; i<=5;i++) //for(iniciziacion; condicion; incremento)
{
    cout << "i= " << i << endl;
}

cout << "------------------------------------" << endl;

do
{
    cout << "Non se che va a pasar oggi" << endl;
}
while(false);

cout << "------------------------------------" << endl;

switch (n)
{
case 1:
    //blocco di codice1
    break;

default:
    cout << "default" << endl;
    break;
}

 explain syntax switch

    switch(variabile di contro)
    {

    case (etichetta case 1):
            //blocco codice di case (etichetta case 1)
        break case 1;

    case (etichetta case 2):
            //blocco codice di case (etichetta case 2)
        break case 2;

    case (etichetta case 3):
            //blocco codice di case (etichetta case 3)
        break case 3;

    ...

    default:
            //blocco codice default

        break default;


cout << "------------------------------------" << endl;

//Tipi di dati

char c = 'c';
string s = "LPTM";
string u = "c";

cout << c << ' ' << s << ' ' << u << endl;

cout << "------------------------------------" << endl;

//Break and Continue

n = 0;

while (true)
{

    if(n == 8)
    {
        break;
    }


    cout << "n= " << n++ << endl;

    if(n%2 == 0)
    {
        continue;
    }


    cout << "ottimo" << endl;

}


x && y = R| x || y = R|
----------| ----------|
V    V = V| V    V = V|
V    F = F| V    F = V|
F    V = F| F    V = V|
F    F = F| F    F = F|


*/
