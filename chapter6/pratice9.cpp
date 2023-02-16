#include<iostream>
#include<fstream>

struct Donor {
    char name[20];
    double money;
};

int main() {
    std::ifstream file;
    file.open("donors.txt");
    if (!file.is_open()) {
        exit(EXIT_FAILURE);
    }
    int num;
    file >> num;
    file.get();
    Donor donors[num];
    for (int i = 0; i < num; i++)
    {
        std::cout << "Please enter the donor: \n"
            << "name: ";
        file.getline(donors[i].name, 20);
        std::cout << "money: ";
        file >> donors[i].money;
        file.get();
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