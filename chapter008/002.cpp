#include <iostream>

using namespace std;

struct CandyBar
{
    char name[20];
    double weight;
    int calory;
};

void fill_print_func(CandyBar &bar, const char *name = "MIllennium", double weight = 2.85, int calory = 350);

int main()
{
    CandyBar bar;

    fill_print_func(bar, bar.name, bar.weight, bar.calory);

    return 0;
}

void fill_print_func(CandyBar &bar, const char *name, double weight, int calory)
{
    cout << "Enter Bar's name: ";
    cin >> bar.name;
    cout << "Enter candy's weight: ";
    cin >> bar.weight;
    cout << "Enter candy's calory: ";
    cin >> bar.calory;

    cout << "Bar name: " << bar.name << endl
         << "Candy weight: " << bar.weight << endl
         << "Candy calory: " << bar.calory << endl;
}
