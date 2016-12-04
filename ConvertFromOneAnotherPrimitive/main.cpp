#include <iostream>
#include "util.h"
#include <string>

void printD(double d){ o(d); }
void printI(int i){ o(i); }
int main()
{
    //int to double IS AUTOMATIC
    int a = 5;
    printD(a);
    double dd = a; //Works

   // double to int IS AUTOMATIC
    double da = 45.8; 
    printI(da);
    int aa = da;// Works too

    //double and int to string
    
    string s = std::to_string(aa);
    o(s);



}