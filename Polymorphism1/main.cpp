#include <iostream>
#include <string>
#include<vector>

#include "util.h"
using std::string;
using std::vector;

class Gear {
public : 
    string _name = "COG Gear";
    
};

class Marcus : public Gear
{
public:
        string _weapon = "Lanzor";
};


//Testing the non-polymorphism 
int main()
{
    vector<Gear> mavect;

    Gear g ;
    Marcus m ;

    mavect.push_back(g);
    mavect.push_back(m);

    //This gives an error  because at(1) is now a Gear and has no field weapon

    //o(mavect.at(1)._weapon);

    //This does not work, because the fact it is a Gear vector and truncates anything more than a Gear does not allow to recast as a Marcus
    //Marcus m2 = static_cast<Marcus>(mavect.at(1));

    //This is still not allowed
    //Marcus m2 = reinterpret_cast<Marcus>(mavect.at(1));

   /* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    CONCLUSION : With a vector of static objects(not pointers), you can't do polymorphism (ad you can't do shyte eventually)
    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/
    vector<Gear*> mavectp;
    Gear* gp = new Gear();
    Marcus* mp = new Marcus();

    mavectp.push_back(gp);
    mavectp.push_back(mp);

    //This still does not work, because the vector is of Gear*, and Gear* still does not have _weapon

    //o(mavectp.at(1)->_weapon);

    //This causes an error saying there must be Polymorphism.
    //INDEED, IN C++, YOU CAN DO POLYMORPHISM IF YOU HAVE AT LEAST ONE VIRTUAL METHOD (SEE POLYMORPHISM2)
    //Marcus* mpc = dynamic_cast<Marcus*>(mavectp.at(1));

    //However, static cast will work, because static cast does not care and tries to do stuff nonetheless
    Marcus* mpc = static_cast<Marcus*>(mavectp.at(1));
    //This works, the cast is successful
    o(mpc->_weapon);


  /*  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        CONCLUSION : Even if we have a vector of pointers, polymorphism won't work (need one virtual function).
                                    However, the objects stored keep their dynamic type, so we cant static_cast them back.
    !!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/



}