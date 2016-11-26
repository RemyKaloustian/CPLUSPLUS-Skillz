#pragma once
#include <string>
class Pilot;
class Mecha
{
public:
    std::string _name;
    Pilot* _pilot;
    Mecha(std::string);
    ~Mecha();
};

