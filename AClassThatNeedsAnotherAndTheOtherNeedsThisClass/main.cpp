#include <iostream>
#include "Pilot.h"
#include "Mecha.h"

using namespace std;
int main()
{
    Pilot* p = new Pilot("Erwin Smith");
    Mecha* m = new Mecha("Armored Mecha");

    p->_mecha = m;
    m->_pilot = p;

    cout << "Erwin is piloting " << p->_mecha->_name<< "\n";
    cout << "Armored mecha is piloted by " << m->_pilot->_name << "\n";


}