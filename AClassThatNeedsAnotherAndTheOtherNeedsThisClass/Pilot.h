#pragma once
#include <string>
class Mecha;
class Pilot
{
public:
    std::string _name;
    Mecha* _mecha;
    Pilot(std::string);
    ~Pilot();
};

