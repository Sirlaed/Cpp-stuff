#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

using namespace std;

class character
{
protected:

    string desc[3]; //0 = name, 1 = gender, 2 = classname
    string stat_name[6] = {"health", "mana", "strenght", "dexterity", "intelligence", "faith"};
    int stat_value[6];

public:

    //character();
    character(string n = "NA", string cn = "NA", string g = "NA", int h = -1, int m = -1, int s = -1, int d = -1, int i = -1, int f = -1)
    {
        desc[0] = n;
        desc[1] = g;
        desc[2] = cn;
        stat_value[0] = h;
        stat_value[1] = m;
        stat_value[2] = s;
        stat_value[3] = d;
        stat_value[4] = i;
        stat_value[5] = f;
    }

    virtual void presentation()
    {
        cout << "I'm " << desc[0] << " and I'm a " << desc[1] << " " << desc[2] << endl;
    }

    virtual void stats()
    {
        for(int i = 0; i<6; i++)
        {
            cout << stat_name << ": " << stat_value << endl;
        }
    }
};

#endif // CHARACTER_H
