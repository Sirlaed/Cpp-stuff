#ifndef NODSGEN_H
#define NODSGEN_H
#include<iostream>
#include <vector>
#include <string>

class NodsGen
{
public:




private:
    short int size = 4;
    short int *Lnks = new short int[size] ;
    NodsGen();
    void BuildLinks();
    std::vector<std::string> Pseudosplit(const std::string& txt, char sep);
};

#endif // NODSGEN_H
