#include <iostream>
#include <string>

#include "defines.h"

//IMPORTANT, NO NAMESPACE
using  std::cout;
using std::string;

int main()
{
    //Display message on output at compilation
#ifndef MAMA
#pragma message("MAMA not defined\n");
#endif

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
    cout << to_str(65) << "\n\n";
    
    c("Now using the cout defined macro\n");
    //HOWLY SHIT THIS WORKS
    c("Im in de programe");
    c(8788);
    c(98 + "hehfdj");
    c("dfdf" + 45);
    string asses = "asses";
    c("dem" + asses);

    //Useful macros (who knows !)
     c( __LINE__);
     c(__FILE__);
     c(__DATE__);
     c(__TIME__);

    //Now with different parameters

    return 0;
}