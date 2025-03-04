/*
#include <iostream>
#define n 7
using namespace std;

int hindexCal(int *r);

int main()
{
    int R[n] = {12,7,8,10,7,7,7};

    cout << "L' h-index del investigatore R e': " << hindexCal(R) << endl;
}

int hindexCal(int *r)
{
    int control_caso = 1;
    int h_index=n;
    int count_error=0;
    int checked_el = 0;

    while(true)
    {
        for(int i = 0; i<n; i++)
        {
            checked_el++;

            if(r[i] < h_index)
            {
                count_error++;

                if(count_error == control_caso)
                {
                    h_index--;
                    control_caso++;
                    count_error = 0;
                    checked_el = 0;
                    break;
                }
            }
        }

        if(checked_el == n)
        {
            return h_index;
        }
    }
}
*/
