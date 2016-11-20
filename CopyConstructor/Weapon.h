#pragma once
#include <string>
class Weapon
{
public:
    std::string _id;
    Weapon(std::string id);
    virtual ~Weapon();

    friend std::ostream& operator << (std::ostream& os, Weapon w)
    {
        os << w._id;
        return os;
    }
};

