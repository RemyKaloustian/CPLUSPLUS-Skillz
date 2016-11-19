#include <iostream>

#include "../util.h"


class ColeTrain
{
public: string _cole = "In the flash baby";
};

void byRef(ColeTrain & c)
{
    o("By reference :  ",c._cole);
}

void byPointer(ColeTrain* c)
{
    o("By pointer : ", c->_cole);
}

void byCopy(ColeTrain c)
{
    o("By copy : ", c._cole);
    c._cole = "changed in Copy";
}

int main()
{
    ColeTrain statCole;
    ColeTrain* dynCole = new ColeTrain();

    byCopy(statCole);
    byRef(statCole);
    byPointer(&statCole);
    //Not modified
    o(statCole._cole);

    byCopy(*dynCole);
    byRef(*dynCole);
    byPointer(dynCole);

}