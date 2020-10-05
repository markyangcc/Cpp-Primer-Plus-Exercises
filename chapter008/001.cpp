#include <iostream>
#include <string>

using namespace std;

void print_func(const string *str, int times = 1);

int main()
{

    string str = "Hello, cpp functions!";

    print_func(&str);
    cout << "---------------------" << endl;
    print_func(&str, 5);

    return 0;
}

void print_func(const string *str, int times)
{
    for (int i = 0; i < times; i++)
        cout << *str << endl;
}
