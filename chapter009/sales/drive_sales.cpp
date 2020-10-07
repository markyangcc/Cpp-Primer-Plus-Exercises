#include "namespace.h"
#include <iostream>

int main()
{
    using namespace SALES;

    Sales sales1;
    Sales sales2;

    double arr[QUARTES] = {1.1, 2.2, 3.3, 4.4};

    setSales(sales1, arr, QUARTES);
    setSales(sales2);

    std::cout << std::endl
              << "Show sales1:" << std::endl;
    showSales(sales1);
    std::cout << std::endl
              << "Show sales2:" << std::endl;
    showSales(sales2);

    return 0;
}