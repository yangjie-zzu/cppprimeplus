#include <iostream>

struct Car {
    char company[20];
    int year;
};

int main() {
    int carCount;
    std::cout << "How many cars do you wish to catalog? ";
    std::cin >> carCount;
    std::cin.get();
    Car * cars = new Car [carCount];
    for (int i = 0; i < carCount; i ++) {
        std::cout << "Car #" << i + 1 << ":" << std::endl;
        std::cout << "Please enter the make: ";
        std::cin.getline(cars[i].company, 20);
        std::cout << "Please enter the year made: ";
        (std::cin >> cars[i].year).get();
    }
    std::cout << "Here is your collection" << std::endl;
    for (int i = 0; i < carCount; i ++) {
        std::cout << cars[i].year << " " << cars[i].company << std::endl;
    }
}

