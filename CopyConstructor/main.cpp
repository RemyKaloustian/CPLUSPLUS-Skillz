#include <iostream>
#include "Weapon.h"
#include "Nephilim.h"

int main()
{
    Weapon* mahWeapon = new Weapon("Yamato");

    Nephilim* vergil = new Nephilim("Vergil", mahWeapon);

    std::cout << *vergil;
    Nephilim* dante = new Nephilim(*vergil, false);

    //delete mahWeapon;
    //This causes an exception, because dante's weapon is pointing to a deleted weapon
    //std::cout << *dante;

    Nephilim* vergil2 = new Nephilim(*vergil, true);


        delete mahWeapon;

        std::cout << *vergil2;

}