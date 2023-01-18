#include <iostream>

struct CandyBar
{
    std::string brand;
    float weight;
    int calorie;
};


int main() {
    struct CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };
    std::cout << snack.brand << std::endl;
    std::cout << snack.weight << std::endl;
    std::cout << snack.calorie << std::endl;
}