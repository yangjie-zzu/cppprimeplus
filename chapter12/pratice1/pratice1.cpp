#include "cow.h"
#include <iostream>

int main() {
    {
        Cow c;
        Cow c1("name1", "hobby1", 1);
        Cow c2(c1);
        Cow c3;
        c3 = c1;
        std::cout << "c: ";
        c.ShowCow();
        std::cout << std::endl;
        std::cout << "c1: ";
        c1.ShowCow();
        std::cout << std::endl;
        std::cout << "c2: ";
        c2.ShowCow();
        std::cout << std::endl;
        std::cout << "c3: ";
        c3.ShowCow();
        std::cout << std::endl;
    }
}