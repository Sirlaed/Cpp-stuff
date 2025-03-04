#include "example.h"
#include<iostream>

using namespace std;

int example::priv_var=10;
int example::pub_var=20;

example::example()
{}

void example::print_pub_bar()
{
    cout << "Pub= " << pub_var << endl;
}
