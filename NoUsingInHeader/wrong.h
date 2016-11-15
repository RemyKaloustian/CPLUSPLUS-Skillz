#include <iostream>
#include <string>

using namespace std;

//everything from std is added the global namespace in every module that includes the header.
//
//This means you can never declare a function or define a class with the same name(and compatible parameters for a function) as an std function / class in the global namespace in any of those modules.
void Print(string param)
{
    cout << param;
}

