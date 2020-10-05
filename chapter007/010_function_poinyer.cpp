#include <iostream>

using namespace std;

double add(double x, double y);

double calculate(double x, double y, double (*pf)(double, double));

int main()
{
    double x, y;
    cout << "Enter two double numbers, q to quit: ";
    while (cin >> x >> y)
    {
        double result = calculate(x, y, add);
        cout << "The result is: " << result << endl;
        cout << "Another two doouble numbers, q to quit: ";
    }

    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double calculate(double x, double y, double (*pf)(double, double))
{

    return (*pf)(x, y);
}