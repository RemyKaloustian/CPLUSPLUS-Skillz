#pragma once

#include <string>
#include <ostream>
#include "Weapon.h"
class Nephilim
{
public:
    std::string _name;
    Weapon* _weapon;
    Nephilim(std::string name, Weapon* weapon);
    Nephilim(const Nephilim&, bool); //The boolean is for working copy constructor(true) or not working copy constructor (false)

    virtual ~Nephilim();

    friend std::ostream& operator << (std::ostream& os, const Nephilim n)
    {
        os << n._name << "\n" << *n._weapon << "\n";
        return os;
    }
};

