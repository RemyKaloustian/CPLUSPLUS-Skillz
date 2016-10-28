#include <iostream>
#include <string>

#include "defines.h"

using std::cout;
using std::string;

class Base { virtual void dodo(){} };
class Derived :public Base { public : int a = 6; };

int main()
{
    Base * from_derived = new Derived();
    Base * from_base = new Base();

    Derived * cast_result;

    cast_result = dynamic_cast<Derived*>(from_derived);
    /*string res = "After a dynamic cast of the Derived object, a = " + cast_result->a->std::to_string();*/
    //c(cast_result->a);

    puttt("datahv");
    cast_result = dynamic_cast<Derived*>(from_derived);

    showMessage("value1: ", 5, " and value2: ", 'a');

}