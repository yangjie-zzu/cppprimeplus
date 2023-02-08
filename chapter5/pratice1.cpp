#include <iostream>

int main() {
    int min;
    int max;
    std::cout << "请输入较小的整数：";
    std::cin >> min;
    std::cout << "请输入较大的整数：";
    std::cin >> max;
    int sum = 0;
    for (int i = min; i <= max; i ++) {
        sum += i;
    }
    std::cout << sum << std::endl;
}