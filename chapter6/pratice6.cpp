#include <iostream>

struct Donor {
    char name[20];
    double money;
};

int main() {

    std::cout << "Pleaser enter the num of the donors: ";
    int num;
    std::cin >> num;
    std::cin.get();
    Donor donors[num];
    for (int i = 0; i < num; i++)
    {
        std::cout << "Please enter the donor: \n"
            << "name: ";
        std::cin.getline(donors[i].name, 20);
        std::cout << "money: ";
        std::cin >> donors[i].money;
        std::cin.get();
    }
    int a = 0;
    std::cout << "Grand Patrons" << std::endl;
    for (int i = 0; i < num; i++)
    {
        if (donors[i].money > 10000) {
            a ++;
            std::cout << donors[i].name << "\t" << donors[i].money << std::endl;
        }
    }
    if (a == 0) {
        std::cout << "none" << std::endl;
    }
    int b = 0;
    std::cout << "Patrons" << std::endl;
    for (int i = 0; i < num; i++)
    {
        if (donors[i].money <= 10000) {
            b ++;
            std::cout << donors[i].name << "\t" << donors[i].money << std::endl;
        }
    }
    if (b == 0) {
        std::cout << "none" << std::endl;
    }
}