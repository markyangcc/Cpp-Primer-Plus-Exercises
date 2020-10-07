#include <iostream>
#include "sales.h"

using namespace std;
using namespace SALES;

int main()
{
    Sales sales1;
    Sales sales2;

    double arr[QUARTES] = {1.1, 2.2, 3.3, 4.4};

    setSales(sales1, arr, QUARTES);

    showSales(sales1);

    return 0;
}