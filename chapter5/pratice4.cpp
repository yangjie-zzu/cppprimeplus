#include <iostream>

int main() {
    int di = 100;
    int ci = 100;
    double d = di;
    double c = ci;
    int i = 0;
    do {
        i ++;
        d += di * 0.1;
        c += c * 0.05;
        std::cout << "第" << i << "年，Cleo：" << c << " Daphne：" << d << std::endl;
    } while (c <= d);
    std::cout << i << "年超过！Cleo：" << c << " Daphne：" << d << std::endl;
}