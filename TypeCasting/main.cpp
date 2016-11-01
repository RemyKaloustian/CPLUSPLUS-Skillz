#include <iostream>
#include <string>

#include "defines.h"

#define REINTERPRET

using std::cout;
using std::string;

//THIS PROGRAM SHOWS THE CASTING POSSIBILITIES

//Classes for dynamic and static examples
class Base { public:virtual void dodo(){ showMessage("In dodo() mah man"); } };
class Derived :public Base { public : int a = 6; };

class Nova 
{ 
    public:
        string name = "Richard Rider"; 
        string gravimetric_blaster = "Gravimetric Blaster";
        int charisma_count = 550000;
           void RocketPunch(){ showMessage("ROCKET PUNCH ! *swoosh*"); } 
};
class Deadpool 
{ 
    public: 
        string name = "Wade Wilson"; 
        string katana_rama = "KATANA RAMA ! ";
        string hyper_combo = "AND IT'S A HOMERUN !";
        void TriggerHappy(){ showMessage("WOHOW ! *click* BANG BANGBANGBANG BANGBANGBANGBANG !"); }
};



int main()
{
#pragma region DYNAMIC

    #ifdef IN_DYNAMIC
    Base * from_derived = new Derived();
    Base * from_base = new Base();

    Derived * cast_result;

    //This cast is going to work, because from_derived is dynamically a Derived, and we put it in another Derived, so no problemo
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
    #endif

    #pragma endregion

#pragma region STATIC

    #ifdef IN_STATIC
    Base * from_derived = new Derived();
    Base * from_base = new Base();

    Derived * cast_result;

    //This cast is going to work, because from_derived is dynamically a Derived, and we put it in another Derived, so no problemo
    cast_result = static_cast<Derived*>(from_derived);
    //The a prints fine and dodo() executes fine
    showMessage("The dynamic cast from derived object has a = ", cast_result->a);
    cast_result->dodo();

    //Now, it's interesting to compare the behavior of this with the dynamic_cast
    //Here, we are trying to put a Base in a Derived
    //This WILL work. It won't throw an exception outta nowhere.

    //THIS is a COMPLETE different approach than the dynamic, In short:
    //Dynamic is like: "Ok, I want to cast something but I want to be SURE that the result object is VALID, 
    //so throw an exception if the cast does not work, because we want VALID data.
    //Static is like: Lol I don't care, I won't throw an exception I promise. You can cast anything into anything, some things might work, some might not, it's up to you.
    cast_result = static_cast<Derived*>(from_base);
    //a will BE printed, but with an INVALID value !
    showMessage("The dynamic cast from base object has a = ", cast_result->a);
    //This will NOT show because static cast makes all casts work, it's just that the data does not automatically follow. 
    if (cast_result == 0)showMessage("cast failed mah man");
    //This will work. cast_result has been cast to Base, it still can execute dodo().
    cast_result->dodo();
    #endif
#pragma endregion


#pragma region REINTERPRET
#ifdef REINTERPRET

    //The reinterpret_cast makes a binary copy, whatever the two classes involved are
    Nova* the_nova = new Nova();
    //the_deadpool is a binary copy of the_nova
    Deadpool* the_deadpool = reinterpret_cast<Deadpool*>(the_nova);
    showMessage(the_deadpool->name); //shows Richard Rider
    //This works because Deadpool second field and Nova second field are both a string
    showMessage(the_deadpool->katana_rama); //shows gravimetric blaster
    //Methods are not modified, this will run the actual code in TriggerHappy()
    the_deadpool->TriggerHappy();



    //This throws an exception because the cast tried to put Nova.charisma_count in Deadpool.hyper_combo
    //It did not work because these fields are not the same type
    showMessage(the_deadpool->hyper_combo);




#endif
#pragma endregion
}