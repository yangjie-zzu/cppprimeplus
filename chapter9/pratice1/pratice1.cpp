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
    golf ar[3];
    for (int i = 0; i < 3; i++)
    {
        setgolf(ar[i], name, hc);
    }
    for (int i = 0; i < 3; i++)
    {
        showgolf(ar[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (!setgolf(ar[i]))
        {
            break;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        showgolf(ar[i]);
    }
    std::cout << "Enter the handicap:\n";
    std::cin >> hc;
    for (int i = 0; i < 3; i++)
    {
        handicap(ar[i], hc);
    }
    for (int i = 0; i < 3; i++)
    {
        showgolf(ar[i]);
    }
}