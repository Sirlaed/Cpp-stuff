/*LEZIONI 5(07/10) -------------------------------------------------------------------------------------------------------------

int main()
{
 //XOR (or exclusivo) "^" solo permite seleccionar una de las opciones del or, si ambas se cumplen, resulta falso, solo permite que una variable sea true

    int x = 0;
    int y = 10;

    if((x == 0) ^ (y == 10))
    {
        cout << "vero" << endl;
    }
    else
    {
        cout << "Falso" << endl;
    }

}


void suma(int x, int y);//Funcion de practica del uso de variables
void opt(int x, int y, char c);//Funcion de practica del uso de operadores
bool ift(int x, int y);//Funcion de practica de condicionales

int main()
{
    int x,y;
    char c;

    cout << "Inserici il primo numero: ";
    cin >> x;

    cout << "Inserici il secondo numero: ";
    cin >> y;

    cout << "Che operazioni vorrei fa? s: somma, r: differenza, p: prodotto, d: divisione, m: modulo" << endl;
    cin >> c;


    //suma(x, y);
    opt(x,y,c);

}

void suma (int x, int y)
{
    int sum;

    sum = x + y;

    cout << "La somma e': " << sum << endl;

}

void opt (int x, int y, char c)
{
    int sum, prdc, diff, dv, mod;

    switch (c) {
    case 's':
        sum = x+y;
        cout << "La somma e': "<< sum << endl;
        break;

    case 'r':
        diff = x-y;
        cout << "La differenaza e': " << diff << endl;
        break;

    case 'p':
        prdc = x*y;
        cout << "Il prodotto e': " << prdc << endl;
        break;

    case 'd':
        dv = x/y;
        cout << "La divisione intera e': " << dv << endl;
        break;

    case 'm':
        mod= x%y;
        cout << "Il modulo e': " << mod << endl;
        break;
    }
}

bool ift(int x, int y)
{
    if(x == y)
    {
        return true;
    }
    else
    {
        return false;
    }
}



*/
