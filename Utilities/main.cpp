#include "util.h"

int main()
{
    //Testing o()
    //o("I love", 45, "tey", 'a', 87.3);

    ////Testing i()
    //int y;
    //o("Type an int");
    //i(y);
    //o("y = ", y);

    //Testing single dimension vectors

    VectI vi = { 45, 77, 88, 99, };
   
    ov(vi, "vi :");
    VectF vf = { 5.0f, 6.3f, 177.896f };
   
    ov(vf, "vf ::", false, " -- ");

    VectD vd = { 4646, 78.56, 88888 };

    VectS vs= { "Un", "Dos", "Tres" };

    //Testing multiple dimensions vector

    MatI mi = { { 47, 87 }, { 21, 23 } };
    MatF mf = { { 7.5f, 49.3f }, { 777.0f, 46.1f } };
    MatD md = { { 7.5, 49.3 }, { 777.0, 46.1 } };
    MatU mu = { { 7, 48 }, { 1058, 44444 } };
    MatS ms = { { "Hyper", "Combo ", "KO !" }, { "Trust", "your", "guts" } };



    
}