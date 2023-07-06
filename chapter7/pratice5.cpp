#include<iostream>

unsigned int factorial(unsigned int n);

int main() {
    unsigned int n;
    while (std::cin >> n)
    {
        std::cout << n <<"! = " << factorial(n) << std::endl;
    }
    return 0;
}

unsigned int factorial(unsigned  n) {
    if (n > 0)
    {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
    
}