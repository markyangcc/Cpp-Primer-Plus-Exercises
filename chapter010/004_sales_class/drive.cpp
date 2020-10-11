#include "sales.cpp"

int main()
{
    using namespace SALES;

    Sales sales1;
    Sales sales2;

    double arr[QUARTES] = {1.1, 2.2, 3.3, 4.4};

    sales1.setSales(arr, QUARTES);
    sales2.setSales();

    std::cout << std::endl
              << "Show sales1:" << std::endl;
    sales1.showSales();
    std::cout << std::endl
              << "Show sales2:" << std::endl;
   sales2.showSales();

    return 0;
}