#include <iostream>

#include "../util.h"

#include "Marine.h"
#include "Chief.h"

//NB: I define the functions in the .h because who cares about the executable size for this little project...



//TO REMEMBER
/*
    We use clone() for two main reasons:
    1) We want a vector to be responsible for its objects (see addNew())
    2) We want an object to be a copy of an object, but we don't know which type casting we should do or which copy constructor call, SO, we use clone()



*/
vector<Marine*> marines;


void add(Marine& m)
{
    o(typeid(m).name());
    
    marines.push_back(&m);
}

void addNew(Marine& m)
{
    //This function is used if we want the vector to be responsible for its elements (that is to say, create a new object based on the parameter passed
    //If we want to use polymorphism in this vector:
    //We can't just push_back(m), because the vector will not be the only responsible (object declared outside the vector and accessible without calling the vector.at()
    //We can't use push_back(new Something()), what do we put at Something ? If we use Marine, we lose polymorphism because the dynamic type of the objects is now Marine, the base class.

    //Our solution is to use clone'), that, thanks to polymorphism (virtual + inheritance) will return the right dynamic type

    marines.push_back(m.clone());

}


int main()
{

    /*
#pragma region NoCloneNoFunction
    Marine* m1 = new Marine();
    Marine* c1 = new Chief();

    marines.push_back(m1);
    marines.push_back(c1);

    o(marines.at(0)->_id);
    marines.at(0)->attack();

    //Works, but can't call _rank, need a cast
    o(marines.at(1)->_id);
    marines.at(1)->attack();

    //Both dynamic cast and static cast work
   Chief* cc = dynamic_cast<Chief*>(marines.at(1));
    o(cc->_rank);

    Chief* ccc = static_cast<Chief*>(marines.at(1));
    ccc->attack();
    o(cc->_rank);

    //Keeps the attck of marines.at(1), but gets the _id of a Marine
    Marine* cccc = static_cast<Marine*>(marines.at(1));
    cccc->attack();
    o(cccc->_id);

#pragma endregion
    */

    Marine* m2 = new Marine();
    Marine* c2 = new Chief();

    add(*m2);
    add(*c2);

    o(marines.at(0)->_id);
    marines.at(0)->attack();
    //For the moment works fine because all the things we want in 
    o(marines.at(1)->_id);
    marines.at(1)->attack();

    o("\n", "After the cast\n");
    //The cast allows to retrieve the info from the dynamic type
    Chief* mm = dynamic_cast<Chief*>(marines.at(1));

    o(mm->classLevel);
    o(mm->_charisma);
    o(mm->_rank);
    o(mm->_id);
    mm->attack();
    mm->kill();

    /*delete c2;
    o(marines.at(1)->_id);
    marines.at(1)->attack();*/

    marines.clear();
    o("\n Clearing the vector \n");

    Marine* mm2 = new Marine();
    Marine* cc2 = new Chief();

    addNew(*mm2);
    addNew(*cc2);

    for (size_t i = 0; i < marines.size(); i++)
    {
        marines.at(i)->attack();
        Chief* mc = dynamic_cast<Chief*>(marines.at(i));
        if (mc != 0)
        {
            o(mc->classLevel);
            o(mc->_charisma);
            o(mc->_rank);
            o(mc->_id);
            mc->kill();
        }
    }



}