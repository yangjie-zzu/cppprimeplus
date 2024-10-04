#include <iostream>
#include "golf.h"

int main() {
    char next;
    char name[len];
    int hc;
    std::cout << "Enter the name:\n";
    std::cin.get(name, len);
    if (!std::cin)
    {
        std::cin.clear();
    }
    std::cin.get(next);
    while (next != '\n')
    {
        std::cin.get(next);
    }
    std::cout << "Enter the handicap:\n";
    std::cin >> hc;
    std::cin.get(next);
    while (next != '\n')
    {
        std::cin.get(next);
    }
    Golf ar[3];
    for (int i = 0; i < 3; i++)
    {
        ar[i] = Golf(name, hc);
    }
    for (int i = 0; i < 3; i++)
    {
        ar[i].show();
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (!ar[i].setgolf())
        {
            break;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        ar[i].show();
    }
    std::cout << "Enter the handicap:\n";
    std::cin >> hc;
    for (int i = 0; i < 3; i++)
    {
        ar[i].setHandicap(hc);
    }
    for (int i = 0; i < 3; i++)
    {
        ar[i].show();
    }
}