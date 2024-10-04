#include <iostream>
#include "golf.h"
#include <cstring>

Golf::Golf(const char * name, int hc) {
    for (int i = 0; i < len; i++)
    {
        fullname[i] = name[i];
    }
    fullname[len - 1] = '\0';
    handicap = hc;
}

void Golf::setHandicap(int hc) {
    handicap = hc;
}

void Golf::show() const {
    std::cout << "fullname: " << fullname << ", handicap: " << handicap << std::endl;
}

int Golf::setgolf() {
    Golf g;
    char next;
    std::cout << "Enter the name:\n";
    std::cin.get(g.fullname, len);
    int result;
    if (std::cin)
    {
        std::cin.get(next);
        while (next != '\n')
        {
            std::cin.get(next);
        }
        std::cout << "Enter the handicap:\n";
        std::cin >> g.handicap;
        std::cin.get(next);
        while (next != '\n')
        {
            std::cin.get(next);
        }
        result = 1;
    } else {
        std::cin.clear();
        result = 0;
    }
    *this = g;
    return result;
}