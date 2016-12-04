#pragma once

#include <vector>
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

    template <typename T >
    void printvect(std::vector<T> vec)
    {
        for (size_t i = 0; i < vec.size(); i++)
        {
            std::cout << " __ " << vec.at(i);
        }
    }
};

