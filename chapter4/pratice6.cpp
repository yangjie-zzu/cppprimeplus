#include <iostream>

struct CandyBar
{
    std::string brand;
    float weight;
    int calorie;
};


int main() {
    struct CandyBar candyBars[] = {
        {
        "Mocha Munch1",
        2.3,
        350
        },
        {
        "Mocha Munch2",
        2.3,
        350
        },
        {
        "Mocha Munch3",
        2.3,
        350
        }
    };
    std::cout << candyBars[0].brand << std::endl;
    std::cout << candyBars[0].weight << std::endl;
    std::cout << candyBars[0].calorie << std::endl;
    std::cout << candyBars[1].brand << std::endl;
    std::cout << candyBars[1].weight << std::endl;
    std::cout << candyBars[1].calorie << std::endl;
    std::cout << candyBars[2].brand << std::endl;
    std::cout << candyBars[2].weight << std::endl;
    std::cout << candyBars[2].calorie << std::endl;
}