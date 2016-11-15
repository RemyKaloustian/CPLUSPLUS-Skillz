#include <iostream>


//What you think : OW, this way I tell the compiler to put this function in inline, I am the king of optimization !
inline void  DemInlines()
{
    std::cout << "Am I inlined ?";
}

//What is happening: inline is just a hint, the compiler may ignore it, it might even inline a function you did ont declare inline
inline void  DemInlines()
{
    std::cout << "Am I inlined ?";
}

//What you should do: Don't even bother, the compiler will inline it as it wants, trust it and let it do the job
void  DemInlines()
{
    std::cout << "Am I inlined ?";
}