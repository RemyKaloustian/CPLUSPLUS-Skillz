#include <iostream>
#include <string>

class StriderHiryu
{
    std::string  name = "Strider Hiryu";
    std::string catchphrase = "Ready for battle";

    friend std::ostream& operator <<(std::ostream& os, const StriderHiryu sh)
    {
        os << sh.name << " , " << sh.catchphrase;
        return os;
    }

};

int main()
{
    StriderHiryu s;

    std::cout << s;
}