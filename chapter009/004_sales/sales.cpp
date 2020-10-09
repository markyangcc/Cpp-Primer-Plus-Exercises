#include "namespace.h"
#include <iostream>

namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        for (int i = 0; i < n; i++)
            s.sales[i] = ar[i];

        double max_num = ar[0];
        double min_num = ar[0];

        for (int i = 0; i < n; i++)
        {
            max_num = std::max(max_num, ar[i]);
            min_num = std::min(min_num, ar[i]);
        }
        s.max = max_num;
        s.min = min_num;

        double total = 0;
        for (int i = 0; i < n; i++)
            total += s.sales[i];

        s.average = total / n;
    }
    void setSales(Sales &s)
    {
        std::cout << "Enter " << QUARTES << " sales: ";
        for (int i = 0; i < QUARTES; i++)
            std::cin >> s.sales[i];

        double max_num = s.sales[0];
        double min_num = s.sales[0];

        for (int i = 0; i < QUARTES; i++)
        {
            max_num = std::max(max_num, s.sales[i]);
            min_num = std::min(min_num, s.sales[i]);
        }
        s.max = max_num;
        s.min = min_num;

        double total = 0;
        for (int i = 0; i < QUARTES; i++)
            total += s.sales[i];

        s.average = total / QUARTES;
    }
    void showSales(const Sales &s)
    {
        std::cout << "sales: ";
        for (int i = 0; i < QUARTES; i++)
            std::cout << s.sales[i] << "  ";

        std::cout << std::endl;

        std::cout << "max: " << s.max << std::endl
                  << "min: " << s.min << std::endl
                  << "average: " << s.average << std::endl;
    }
} // namespace SALES