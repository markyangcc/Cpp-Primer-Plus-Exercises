#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main()
{
    int filed_total, filed_choices, special_total, special_choices;
    cout << "Enter the total filed number of choices on the game card and"
         << "the filed number of picks allowed"
         << ", and enter the total special number of choices on the game card and" << endl
         << "the special number of picks allowed in the next line" << endl;

    while ((cin >> filed_total >> filed_choices >> special_total >> special_choices) && filed_choices <= filed_total && special_choices <= special_total)
    {
        //According to the probability theory formula, the total options are C5/47 * C1/27
        cout << "Pobability: "
             << 1 / (probability(filed_total, filed_choices) * probability(special_total, special_choices)) << endl
             << "Next 4 numbers: ";
    }

    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result *= n / p;

    return result;
}