#include <iostream>

int main() {
    int income;
    while (std::cin >> income && income >= 0)
    {
        int calIncome = 0;
        double cal = 0;
        if (income > 35000) {
            calIncome = income - 35000;
            cal = (income - 35000) * 0.20;
        }
        income -= calIncome;
        if (income > 15000)
        {
            calIncome = income - 15000;
            cal += (income - 15000) * 0.15;
        }
        income -= calIncome;
        if (income > 5000) {
            calIncome = income - 5000;
            cal += (income - 5000) * 0.10;
        }
        std::cout << cal << std::endl;
    }
    
}