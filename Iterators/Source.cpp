#include <iostream>
#include <vector>
#include <string>
#include "defines.h"
using std::vector;
using std::string;
using std::cout;

/*Iterators are really useful because they make the code more generic*/

int main()
{
    vector<string> mahVect;
    mahVect.push_back("Shoryuken !");
    mahVect.push_back("Tatsumaki Sempukyiaku ! ");
    mahVect.push_back("Hadoken !");

    for (auto i = mahVect.begin(); i != mahVect.end() ; i++)
    {
        //Display an iterator
        c(*i);

        //Get the index 
        c(i - mahVect.begin());
    }
}