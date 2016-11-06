#pragma once

#include <iostream>
#include<vector>
#include <string>

using std::cout;
using std::cin;
using std::vector;
using std::string;

typedef vector<int> VectI;
typedef vector<float> VectF;
typedef vector<double> VectD;
typedef vector<unsigned> VectU;
typedef vector<string> VectS;

typedef vector<vector<int>> MatI;
typedef vector<vector<float>> MatF;
typedef vector<vector<double>> MatD;
typedef vector<vector<unsigned>> MatU;
typedef vector<vector<string>> MatS;


//cout shorcut in 2 functions
template<typename T>
void o(T &&t) {
    cout << t << "\n";
}
template<typename Head, typename... Tail>
void o(Head &&head, Tail&&... tail) {
    cout << head;
    o(std::forward<Tail>(tail)...);
}

//cin shortcut
template<typename Input>
void i(Input & the_variable)
{
    o("In i");
    cin >> the_variable;
}

//Vector display
template<typename T>
void ov(vector<T> the_vector, string message="", bool has_index = true, string separator="\n")
{
    o("\n " + message + "\n");
    for (auto i = the_vector.begin(); i != the_vector.end(); i++)
    {
        cout << *i;
        if (has_index)cout << "  at " << i - the_vector.begin() ;
        cout << separator;
    }
    o("\n");
}

