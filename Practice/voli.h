#ifndef VOLI_H
#define VOLI_H

#include <iostream>
using namespace std;

class voli
{
private:

    string code;
    string aero_dep;
    string aero_arr;
    float time_dep;
    float time_arr;

public:

    voli(string c = "--------", string ad = "NA", string aa = "NA", float td = 0.0, float ta = 0.0);
    string get_code();
    string get_aerod();
    string get_aeroa();
    float get_timed();
    float get_timea();
};

#endif
