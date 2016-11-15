#include <iostream>
#include <string>
#include "../util.h"

using std::string;



class Gear
{
public :
    string name = "COG Gear";
    virtual void Talk(){ o("Prescott is my boss"); }
};

class Marcus : public Gear
{
public:
    string weapon = "Lanzor";
    virtual void Talk(){ o("I have a Lanzor"); }
};

//Test of polymorphism
int main()
{
    Gear g;
    Marcus m;

    vector<Gear> gears;
    gears.push_back(g);
    gears.push_back(m);

    //Still error cause a vector of Gears, does not know weapon
    //o(gears.at(1).weapon);

    //Can't even perform dynamic cast because.....THAT'S NOT A VECTOR OF DYNAMIC OBJECTS
    //Marcus m2 = dynamic_cast<Marcus>(gears.at(1));

    //Does not work, can't cast a Gear to a Marcus
    //Marcus m3 = static_cast<Marcus>(gears.at(1));

    Gear* g2 = new Gear();
    Marcus* m2 = new Marcus();
    vector <Gear*> gearsp;
    gearsp.push_back(g2);
    gearsp.push_back(m2);

    //Still, this won't work, because even though there is no truncature, gearsp is of Gear*, we need to cast
    //o(gearsp.at(1)->weapon);

    //AND NOW THIS WORKS, THE CAST IS VALID BECAUSE THERE IS A DYNAMIC TYPE AND WE CAN RETRIEVE IT SINCE WE HAVE A VECTOR OF POINTERS
    o(dynamic_cast<Marcus*>(gearsp.at(1))->weapon);

    //AND OF COURSE THIS WORKS TOO
    o(static_cast<Marcus*>(gearsp.at(1))->weapon);


}