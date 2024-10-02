#include <iostream>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc) {
    for (int i = 0; i < len; i++)
    {
        g.fullname[i] = name[i];
    }
    g.fullname[len - 1] = '\0';
    g.handicap = hc;
}

int setgolf(golf & g) {
    char next;
    std::cout << "Enter the name:\n";
    std::cin.get(g.fullname, len);
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
        return 1;
    } else {
        std::cin.clear();
        return 0;
    }
}

void handicap(golf & g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf & g) {
    std::cout << "fullname: " << g.fullname << ", handicap: " << g.handicap << std::endl;
}