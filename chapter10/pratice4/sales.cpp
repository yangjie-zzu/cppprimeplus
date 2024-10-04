#include <iostream>
#include "sales.h"

namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        double total = 0;
        double max = 0;
        double min = 0;
        for (int i = 0; i < QUATERS; i++)
        {
            if (i < n)
            {
                sales[i] = ar[i];
            }
            else
            {
                sales[i] = 0;
            }
            total += sales[i];
            if (sales[i] > max)
            {
                max = sales[i];
            }
            if (sales[i] < min)
            {
                min = sales[i];
            }
        }
        average = total / QUATERS;
        max = max;
        min = min;
    }

    Sales::Sales()
    {
        double total = 0;
        double max = 0;
        double min = 0;
        for (int i = 0; i < QUATERS; i++)
        {
            std::cout << "Enter the sale of " << i + 1 << ":\n";
            std::cin >> sales[i];
            total += sales[i];
            if (sales[i] > max)
            {
                max = sales[i];
            }
            if (sales[i] < min)
            {
                min = sales[i];
            }
        }
        average = total / QUATERS;
        max = max;
        min = min;
    }

    void Sales::show() const
    {
        for (int i = 0; i < QUATERS; i++)
        {
            std::cout << "the sale of " << i + 1 << ": " << sales[i] << std::endl;
        }
        std::cout << "average: " << average << std::endl;
        std::cout << "max: " << max << std::endl;
        std::cout << "min: " << min << std::endl;
    }
}