#include <iostream>
#include <string>

using namespace std;

const int Seasons = 4;
const char *Snames[4] = {"Spring", "Summer", "Fall", "Winter"};

double Expenses[Seasons];

void fill(double *da, int Seasons);
void show(char (*pa)[4], int Seasons);

int main()
{
    for (int i = 0; i < 4; i++)
    {
        //cout << *(Snames + i) << endl;
        //cout << (void *)Snames << ' ' << (void *)*Snames << ' ' << (Snames + i) << ' ' << *(Snames + i) << endl;
    }

    show(Snames, 4);
    return 0;
}

void show(char (*pa)[4], int Seasons)
{
    for (int i = 0; i < 4; i++)
    {
        cout << *(pa + i) << endl;
    }
}

void fill(double *da, int Seasons)
{
    cout << "Enter expenses for 4 seasons(Spring to Winter): ";

    for (int i = 0; i < Seasons; i++)
        cin >> da[i];
}
