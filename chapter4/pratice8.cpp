#include <iostream>

struct Pizza {
    char company[30];
    int diameter;
    float weight;
};

int main() {
    Pizza * pizza = new Pizza;
    std::cout << sizeof(*pizza) << std::endl;
    std::cout << sizeof((*pizza).company) << std::endl;
    std::cout << sizeof(pizza -> diameter) << std::endl;
    std::cout << sizeof(pizza -> weight) << std::endl;
    std::cin.getline(pizza -> company, 30) >> pizza -> diameter >> pizza -> weight;
    std::cout << pizza -> company << std::endl;
    std::cout << pizza -> diameter << std::endl;
    std::cout << pizza -> weight << std::endl;
}