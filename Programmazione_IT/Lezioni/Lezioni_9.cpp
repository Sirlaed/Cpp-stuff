/*LEZIONI 9(24/10) -------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int ar[5] = {4,13,420,69,5};

    int x = 5;

    int* pt = &x;

    cout << "Indirizo de x in pt: " << pt << endl << "Indirizo di x: " << &x << endl;

    cout << "Valore di x in pt: " << *pt << endl << "Valore di x: " << x << endl;

    cout << "Indirizo di pt quando apunta a x: " << &pt << endl;

    int y = 4;

    pt = &y;

    cout << "Indirizo de y in pt: " << pt << endl << "Indirizo di y: " << &y << endl;

    cout << "Valore di y in pt: " << *pt << endl << "Valore di y: " << y << endl;

    cout << "Indirizo di pt quando apunta a y: " << &pt << endl;

    //int** pt2 = &pt --> int*** pt3 = &pt2; --> ...

    //int *const cpt = &ar[0]; constant pointer

    cout << ar << endl << &ar[0]; //ar es un constant pointer al primo elemento del array ar
}


*/
