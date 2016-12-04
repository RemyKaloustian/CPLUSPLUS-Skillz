#pragma once
class Printer
{
public:
    Printer();
    ~Printer();


    template <typename toprint>
    void printme(toprint a)
    {
        std::cout << a;
    }
};

