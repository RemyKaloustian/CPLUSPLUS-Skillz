#include "Nephilim.h"


Nephilim::Nephilim(std::string name, Weapon* weapon) :_name(name), _weapon(weapon)
{

}

Nephilim::Nephilim(const Nephilim& nephi, bool isRight)
{
    if (!isRight)
    {
        this->_name = nephi._name;
        this->_weapon = nephi._weapon;
    }
    else
    {
        this->_name = nephi._name;
        this->_weapon = new Weapon(nephi._weapon->_id);
    }
}


Nephilim::~Nephilim()
{
}
