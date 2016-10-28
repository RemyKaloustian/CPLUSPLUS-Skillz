//INCLUDE STD !!!!!!!!!!!!!!!!!

#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::ostream;

#define c(param) cout<<param<<"\n"

#define cc(param1, param2) cout<<param1#param2<<"\n"


void puttt(ostream& momo)
{
    //cout<< momo << "\n";
}


template<typename T>
void showMessage(T &&t) {
    std::cout << t << "\n";
}

template<typename Head, typename... Tail>
void showMessage(Head &&head, Tail&&... tail) {
    std::cout << head;
    showMessage(std::forward<Tail>(tail)...);
}


