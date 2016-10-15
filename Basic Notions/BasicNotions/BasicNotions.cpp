// BasicNotions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void HelloWorld()
{
    std::cout << "Dayum hello world . \n";
}//HelloWorld()

void Perimeter()
{
    int width;
    int height;
    std::cout << "Type the width\n";
    std::cin >> width;
    std::cout << "Type the height\n";
    std::cin >> height;

    std::cout << "The perimeter is " << width*height<<"\n";

}//Perimeter()

void Mean()
{
    int sum = 0;
    int nb;
    for (int i = 1; i< 6; i++)
    {
        std::cout << "Type a number \n";
        std::cin >> nb;
        sum += nb;
    }
    std::cout << "The mean is  : " << sum / 5<<"\n";
}//Mean()

void Swap()
{
    int a;
    int b;

    std::cout << "Enter a :\n";
    std::cin >> a;
    std::cout << "Enter b : \n";
    std::cin >> b;

    int tmp = a;
    a = b;
    b = tmp;

    std::cout << "The new value of a is : " << a << "\n";
    std::cout << "The new value of b is : " << b << "\n";
}
void TVA()
{
    float price;
    float amount;
    float TVA;

    std::cout << "Enter a price:\n";
    std::cin >> price;
    std::cout << "Enter the amount:\n";
    std::cin >> amount;
    std::cout << "Enter the TVA:\n";
    std::cin >> TVA;

    std::cout << "The new price is " << (price*amount) + (price * amount)*TVA << "\n";

}

int _tmain(int argc, _TCHAR* argv[])
{
    HelloWorld();
    Perimeter();
    Mean();
    Swap();
    TVA();
	return 0;
}

