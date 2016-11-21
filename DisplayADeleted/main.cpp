#include <iostream>


class Tada
{

};
int main()
{
    int i = 8;
    int *ip = &i;
    
    delete ip;


    //Throws an exception because ip is deleted
    std::cout << *ip;
    std::cout << ip;
}
