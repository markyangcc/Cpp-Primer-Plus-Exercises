#include <iostream>

using namespace std;

void fill(double *da, int seasons);
void show(const char **pa, int seasons, double *da);

int main()
{

    const int Seasons = 4;
    const char *Snames[4] = {"Spring", "Summer", "Fall", "Winter"};

    double Expenses[Seasons];

    fill(Expenses, Seasons);
    show(Snames, Seasons, Expenses);

    return 0;
}

void fill(double *da, int seasons)
{
    cout << "Enter expenses for 4 seasons(Spring to Winter): ";

    for (int i = 0; i < seasons; i++)
        cin >> *(da + i);
}

void show(const char **pa, int seasons, double *da)
{
    for (int i = 0; i < seasons; i++)
    {
        cout << *(pa + i) << ":\t" << *(da + i) << endl;
    }
}