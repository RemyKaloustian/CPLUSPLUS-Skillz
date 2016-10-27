#include <iostream>

#include "defines.h"

//IMPORTANT, NO NAMESPACE
using  std::cout;

int main()
{
    cout << "The goal is to see the use of preprocessor commands\n\n";

    cout << "Using the defined variables :\n";
    cout << "first define int is " <<  dat_int <<"\n";
    cout << "The string define is " << dat_string << "\n\n";


    cout << "Using the defined functions : \n";
    //Works with int/int, string/string, float/int
    cout << getmax(3, 78)<<"\n";
    cout << getmax("aaa", "uug") << "\n";
    cout << getmax(100.3, 88) << "\n\n";

    //This won't work, as int and string are not compatible
   // cout << getmax(88, "uug") << "\n";
    cout << to_str(65) << "\n";

    return 0;
}