#include <iostream>
#include "sales.h"

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        double total = 0;
        double max = 0;
        double min = 0;
        for (int i = 0; i < QUATERS; i++)
        {
            if (i < n)
            {
                s.sales[i] = ar[i];
            }
            else
            {
                s.sales[i] = 0;
            }
            total += s.sales[i];
            if (s.sales[i] > max)
            {
                max = s.sales[i];
            }
            if (s.sales[i] < min)
            {
                min = s.sales[i];
            }
        }
        s.average = total / QUATERS;
        s.max = max;
        s.min = min;
    }

    void setSales(Sales & s)
    {
        double total = 0;
        double max = 0;
        double min = 0;
        for (int i = 0; i < QUATERS; i++)
        {
            std::cout << "Enter the sale of " << i + 1 << ":\n";
            std::cin >> s.sales[i];
            total += s.sales[i];
            if (s.sales[i] > max)
            {
                max = s.sales[i];
            }
            if (s.sales[i] < min)
            {
                min = s.sales[i];
            }
        }
        s.average = total / QUATERS;
        s.max = max;
        s.min = min;
    }

    void showSales(const Sales & s)
    {
        for (int i = 0; i < QUATERS; i++)
        {
            std::cout << "the sale of " << i + 1 << ": " << s.sales[i] << std::endl;
        }
        std::cout << "average: " << s.average << std::endl;
        std::cout << "max: " << s.max << std::endl;
        std::cout << "min: " << s.min << std::endl;
    }
}