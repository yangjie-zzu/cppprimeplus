#include <iostream>

struct CandyBar {
    const char * name;
    double weight;
    int hot;
};

void fillCandyBar(CandyBar & candyBar, const char * name, const double weight, const int hot);

void showCandyBar(CandyBar & candyBar);

int main() {
    CandyBar candyBar;
    fillCandyBar(candyBar, "Millennium Munch", 2.85, 350);
    showCandyBar(candyBar);
}

void fillCandyBar(CandyBar & candyBar, char name[20], const double weight, const int hot) {
    candyBar.name = "test";
    candyBar.weight = weight;
    candyBar.hot = hot;
};

void showCandyBar(CandyBar & candyBar) {
    std::cout << candyBar.name << "," << candyBar.weight << "," << candyBar.hot << std::endl;
};