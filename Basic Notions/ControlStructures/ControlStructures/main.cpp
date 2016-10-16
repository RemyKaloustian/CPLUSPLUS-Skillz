#include <iostream>

void TypeInt()
{
    int bn;
    std::cout << "Type an int :\n";
    std::cin >> bn;

    if (bn >= 56 && bn <= 78)
        std::cout << "U won !\n";
    else
    {
        std::cout << "U lose...";
    }
}

void IntervalDisplay()
{
    for (size_t i = 8; i < 24; i++)
    {
        std::cout << i << "\n";
    }
}

void IntervalDisplay2()
{
    int nb = 7;
    while (nb++ < 23)
    {
        std::cout << nb << "\n";
    }
}

void TenSum()
{
    int nb = 0;
    int sum = 0;

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Type an int\n";
        std::cin >> nb;
        sum += nb;
    }

    std::cout << "Sum = " << sum;
}

void SmallestOfTen()
{
    int smallest= 0;
    int nb;
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Type an int\n";
        std::cin >> nb;
        if (smallest == 0 || nb< smallest) smallest = nb;
    }

    std::cout << "The smallest is " << smallest << "\n";
}
void CubicSum()
{
    int sum = 0;

    int nb;

    std::cout << "Type an int\n";
    std::cin >> nb;

    for (size_t i = 5; i <= nb; i++)
    {
        sum += i*i*i;
    }

    std::cout << "The cubic sum is : "<<sum<<"\n";
}

void Un()
{
    int u0 = 3;
    int n;

    std::cout << "Type an int\n";
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        u0 = 3 * u0 + 4;
        std::cout << "u = " << u0;
    }

    std::cout << "u(" << n << ") = " << u0 << "\n";

}

void Un2()
{
    int un_minus_1 = 1;
    int un = 1;
    int current_u;
    int nb;

    std::cout << "Type an int\n";
    std::cin >> nb;

    for (size_t i = 2; i < nb; i++)
    {
        current_u = un + un_minus_1;
        un_minus_1 = un;
        un = current_u;
    }

    std::cout << "The un is = " << current_u << "\n";
}

int main()
{
    //TypeInt();
    //IntervalDisplay();
    //IntervalDisplay2();
    //TenSum();
    //SmallestOfTen();
    //CubicSum();
    //Un();
    Un2();
}