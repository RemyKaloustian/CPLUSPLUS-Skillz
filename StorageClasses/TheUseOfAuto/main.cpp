#include <iostream>
#include <string>
#include <vector>

#include "defines.h"
using std::string;
using std::cout;
using std::vector;


/*
Other use of auto, when we don't know the type of return because we use templates
*/
template<class T, class U>
auto add(T t, U u) -> decltype(t + u) // the return type is the type of operator+(T, U)
{
    return t + u;
}


int main()
{

    vector<string> vect;

    vect.push_back("The first");
    vect.push_back("The second");
    vect.push_back("The last");

    /*
    auto is SIMPLY used to deduce the type of the variable and should not be used for other stuff, where it can get ambiguous
    */
    //Here, we write auto because vector<string>::iterator is too damn long
    for (auto it = vect.begin(); it != vect.end(); ++it)
    {
        c(*it);
    }


    //With templates

    auto test = add(78.055, 84);
    c(test);

   
}