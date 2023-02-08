#include <iostream>

int main () {
    int line;
    std::cout << "Enter number of rows: ";
    std::cin >> line;
    int m;
    int n;
    for (int i = 0; i < line; i ++) {
        n = (i + 1);
        m = line - n;
        for (int j = 0; j < m; j ++) {
            std::cout << ".";
        }
        for (int k = 0; k < n; k ++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}