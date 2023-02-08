#include <iostream>
#include <cstring>

int main() {
    char word[20];
    int total = 0;
    std::cout << "Enter words (to stop, type the word done):\n";
    while (std::cin >> word, strcmp(word, "done"))
    {
        total ++;
    }
    std::cout << "You entered a total of " << total << " words." << std::endl;
}