#include <iostream>

int main() {
    int h;
    int sum = 0;
    std::cin >> h;
    while (h)
    {
        std::cout << "截至到目前累计和：" << (sum += h) << std::endl;
        std::cin >> h;
    }
    
}