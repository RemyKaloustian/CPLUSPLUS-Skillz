#pragma once
#include "Marine.h"

#include <string>

#include "../util.h"
class Chief :
    public Marine
{
public:
    std::string _rank = "I am the MasterChief .";
    std::string _charisma = "I am charisma";
    int classLevel = 50000;
    Chief();
    virtual ~Chief();
    virtual Chief* clone()
    {
        return new Chief(*this);
    }

    virtual void attack()
    {
        o("Attacking with the HAMMER !");
    }

    void kill()
    {
        o("Enemy killed ! ");
    }
};

