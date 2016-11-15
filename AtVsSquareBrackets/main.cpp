#include <iostream>
#include<vector>

#include "../util.h"

using std::vector;

//at() vs[]
int main()
{
    vector<int> mahvect;

    mahvect.push_back(12);

    //This won't return an exception, just a runtime error
  /*  try
    {
        o(mahvect[2]);
    }
    catch (...)
    {
        o("Exception using []");
    }*/

    //This will trhow an exception, better cuz we can catch it and not stop the program
    try
    {
        o(mahvect.at(2));

    }
    catch (...)
    {
        o("Exception using at()");
    }

}