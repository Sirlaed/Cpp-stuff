#include <voli.h>
#include <iostream>
using namespace std;

voli::voli(string c, string ad, string aa, float td, float ta)
{
    code = c;
    aero_dep = ad;
    aero_arr = aa;
    time_dep = td;
    time_arr = ta;
}

string voli::get_code()
{
    return code;
}

string voli::get_aerod()
{
    return aero_dep;
}

string voli::get_aeroa()
{
    return aero_arr;
}

float voli::get_timed()
{
    return time_dep;
}

float voli::get_timea()
{
    return time_arr;
}
