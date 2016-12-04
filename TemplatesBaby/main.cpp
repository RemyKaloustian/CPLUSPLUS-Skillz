#include <iostream>
#include <string>
#include "Printer.h"

using namespace std;

int main()
{
    Printer p;

    p.printme(45);
    p.printme('a');
    p.printme("rererere");

    std::vector<int> vecint = { 46, 8, 3336, (int)3.05 };

    std::vector<string> vecstr = { "rere", "bebeb", "merci cesar colle" };

    p.printvect(vecint);
    p.printvect(vecstr);
}