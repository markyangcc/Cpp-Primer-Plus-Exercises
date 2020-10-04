#include <iostream>

using namespace std;

struct Expenses
{
    double expense[4];
};

void fill(struct Expenses *pe, int seasons);
void show(const char **pa, int seasons, struct Expenses *pe);

int main()
{

    const int Seasons = 4;
    const char *Snames[4] = {"Spring", "Summer", "Fall", "Winter"};

    struct Expenses Expenses_s;

    fill(&Expenses_s, Seasons);
    show(Snames, Seasons, &Expenses_s);

    return 0;
}

void fill(struct Expenses *pe, int seasons)
{
    cout << "Enter expenses for 4 seasons(Spring to Winter): ";

    for (int i = 0; i < seasons; i++)
        cin >> *(pe->expense + i);
}

void show(const char **pa, int seasons, struct Expenses *pe)
{
    for (int i = 0; i < seasons; i++)
    {
        cout << *(pa + i) << ":\t" << *(pe->expense + i) << endl;
    }
}
