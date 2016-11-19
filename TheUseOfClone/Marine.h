#pragma once

#include <string>

#include "../util.h"
class Marine
{
public:
    std::string _id = "I am a Marine";
    Marine();
    virtual ~Marine();

    virtual Marine* clone()
    {
        return new Marine(*this);
    }

    virtual void attack()
    {
        o("Attacking with rifle !");
    }
};

