#include <QCoreApplication>
#include <iostream>
void patron4();

int main()
{
    int Num = 9;
    unsigned int CFact = 1;

    do
    {
        CFact = CFact*Num*(Num-1);
        Num = Num - 2;
        if (Num == 1)
        {
            Num = -1;
        }

    }
    while(Num > 0);
    std::cout << CFact;
}
