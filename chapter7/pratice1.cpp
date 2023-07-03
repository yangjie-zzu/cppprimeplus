#include <iostream>

double harmonic_mean(double x, double y);

int main() {
    double x, y;
    std::cin >> x >> y;
    while (x != 0 && y != 0)
    {
        double d3 = harmonic_mean(x, y);
        std::cout << d3 << std::endl;
        std::cin >> x >> y;
    }
    return 0;
}

double harmonic_mean(double x, double y) {
    return 2.0 * x * y / (x + y);
}