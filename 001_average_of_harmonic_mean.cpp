#include <iostream>

using namespace std;

int HarmonicMean(int x, int y);

int main()
{
    cout << "Enter two intergers(for example: 2.2 3): ";

    double x, y;
    double sum = 0;
    double result;
    int count = 0;

    cin >> x;
    cin >> y;

    while (x != 0 && y != 0)
    {
        result = HarmonicMean(x, y);

        //plus count num after each function call
        count++;

        sum += result;

        cin >> x;
        cin >> y;
    }

    if (x == 0 || y == 0)
        cout << "The latest input values include 0, input exited by default." << '\n';
    cout << "Total read in pairs num are " << count << '\n';
    cout << "The average of these paired harmonic mean is " << sum / count << '\n';

    return 0;
}

int HarmonicMean(int x, int y)
{
    return 2 * x * y / (x + y);
}