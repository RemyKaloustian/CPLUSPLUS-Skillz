#pragma once
#include "Mummy.h"
class Childy :
    private Mummy
{
public:
    Childy();
    ~Childy();

    using Mummy::SayHi;

    void SayHiHi()
    {
        SayHi();
    }
};

