#include <iostream>

double calcute(double x, double y, double fun(double x, double y));

double add(double x, double y);

double sub(double x, double y);

int main() {
    double (* pf[2])(double x, double y) = {add, sub};

    double x, y;
    while (std::cin >> x >> y)
    {
        for (int i = 0; i < 2; i++)
        {
            std::cout << calcute(x, y, * pf[i]) << " ";
        }
        std::cout << std::endl;
        
    }
    return 0;
}

double calcute(double x, double y, double fun(double x, double y)) {
    return fun(x, y);
}

double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}