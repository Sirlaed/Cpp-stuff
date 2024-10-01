#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "nodsgen.h"

NodsGen::NodsGen()
{
    for(int i = 0;i<4;i++)
    {

    }
}

void NodsGen::BuildLinks()
{
    std::ifstream fin;
    std::string line;
    fin.open("RedNodsBase.txt");
    while(std::getline(fin,line))
    {
        //aplicar el pseudo split adaptado a c++
        if(line[0] == '<')
        {
            std::cout << line[5] << std::endl;
        }

    }

    fin.close();
}

std::vector<std::string> NodsGen::Pseudosplit(const std::string& txt, char sep)
{
    std::vector<std::string> words;
    std::string word = "";

    for (char i : txt) {
        if (i != sep) {
            word += i;
        } else {
            words.push_back(word);
            word = "";
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    return words;

}
