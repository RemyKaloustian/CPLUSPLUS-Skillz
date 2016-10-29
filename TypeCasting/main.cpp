#include <iostream>
#include <string>

#include "defines.h"

using std::cout;
using std::string;

//THIS PROGRAM SHOWS THE DIFFERNCE BETWEEN THE CASTING POSSIBILITIES

class Base { public:virtual void dodo(){ showMessage("In dodoodod"); } };
class Derived :public Base { public : int a = 6; };

int main()
{
    #pragma region DYNAMIC
    Base * from_derived = new Derived();
    Base * from_base = new Base();

    Derived * cast_result;

    //This cast is going to work, because from_derived is dynamically a Derived, and we put it in another Derived, so no prroblemo
    cast_result = dynamic_cast<Derived*>(from_derived);
    //The a prints fine and dodo() executes fine
    showMessage("The dynamic cast from derived object has a = ", cast_result->a);
    cast_result->dodo();

    //Now here comes the real deal, this is why we use DYNAMIC cast.
    //Here, we are trying to put a Base in a Derived, which will NOT work, BECAUSE, Base is NOT A FULL Derived object
    cast_result = dynamic_cast<Derived*>(from_base);
    //a will not be printed
    showMessage("The dynamic cast from base object has a = ", cast_result->a);
    //This will show because the cast failed 
    if (cast_result == 0)showMessage("cast failed mah man");
    //This will cause a runtime exception
    cast_result->dodo();

    #pragma endregion

#pragma region STATIC
    Base * from_derived = new Derived();
    Base * from_base = new Base();

    Derived * cast_result;

    //This cast is going to work, because from_derived is dynamically a Derived, and we put it in another Derived, so no prroblemo
    cast_result = dynamic_cast<Derived*>(from_derived);
    //The a prints fine and dodo() executes fine
    showMessage("The dynamic cast from derived object has a = ", cast_result->a);
    cast_result->dodo();

    //Now here comes the real deal, this is why we use DYNAMIC cast.
    //Here, we are trying to put a Base in a Derived, which will NOT work, BECAUSE, Base is NOT A FULL Derived object
    cast_result = dynamic_cast<Derived*>(from_base);
    //a will not be printed
    showMessage("The dynamic cast from base object has a = ", cast_result->a);
    //This will show because the cast failed 
    if (cast_result == 0)showMessage("cast failed mah man");
    //This will cause a runtime exception
    cast_result->dodo();

#pragma endregion
}