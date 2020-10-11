#include "sales.h"
#include <iostream>

namespace SALES
{
    void Sales::setSales(const double ar[], int n)
    {
        for (int i = 0; i < n; i++)
            sales[i] = ar[i];

        double max_num = ar[0];
        double min_num = ar[0];

        for (int i = 0; i < n; i++)
        {
            max_num = std::max(max_num, ar[i]);
            min_num = std::min(min_num, ar[i]);
        }
        max = max_num;
        min = min_num;

        double total = 0;
        for (int i = 0; i < n; i++)
            total += sales[i];

        average = total / n;
    }
    void Sales::setSales()
    {
        std::cout << "Enter " << QUARTES << " sales: ";
        for (int i = 0; i < QUARTES; i++)
            std::cin >> sales[i];

        double max_num = sales[0];
        double min_num = sales[0];

        for (int i = 0; i < QUARTES; i++)
        {
            max_num = std::max(max_num, sales[i]);
            min_num = std::min(min_num, sales[i]);
        }
        max = max_num;
        min = min_num;

        double total = 0;
        for (int i = 0; i < QUARTES; i++)
            total += sales[i];

        average = total / QUARTES;
    }
    void Sales::showSales() const
    {
        std::cout << "sales: ";
        for (int i = 0; i < QUARTES; i++)
            std::cout << sales[i] << "  ";

        std::cout << std::endl;

        std::cout << "max: " << max << std::endl
                  << "min: " << min << std::endl
                  << "average: " << average << std::endl;
    }
} // namespace SALES