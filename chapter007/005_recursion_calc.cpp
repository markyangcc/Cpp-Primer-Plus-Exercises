#include <iostream>

using namespace std;

unsigned long recursion_calc(int num);

int main()
{
    // On my computer, unsigned long is the same bits as unsigned long long, so 65! is the biggest num can print correctly
    cout << "Enter a num(limit to 65): ";
    int num;

    while (cin >> num)
    {
        unsigned long result = recursion_calc(num);

        cout << num << "!: " << result << endl
             << endl;

        cout << "Another num(q to quit): ";
    }

    return 0;
}

unsigned long recursion_calc(int num)
{
    if (num > 1)
        return num * recursion_calc(num - 1);
    else
        return 1;
}

/*
//Test program: to test your computer's limitation of big value
#include <iostream>

using namespace std;

unsigned long recursion_calc(int num);

int main()
{
    cout << "Enter a num(means edge of unsigned long type to test" << endl
         << "For example: 50,100): ";

    int edge;
    cin >> edge;

    for (int i = 1; i <= edge; i++)
    {
        unsigned long result = recursion_calc(i);

        cout << i << "!: " << result << endl
             << endl;
    }

    return 0;
}

unsigned long recursion_calc(int num)
{
    if (num > 1)
        return num * recursion_calc(num - 1);
    else
        return 1;
}
*/