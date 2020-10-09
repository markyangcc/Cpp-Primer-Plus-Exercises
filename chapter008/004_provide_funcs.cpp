#include <cstring>
#include <iostream>

using namespace std;

struct stringy
{
    char *str;
    int ct;
};

char *set(stringy &beany, char *testing);
void show(stringy beany, int times = 1);
void show(string str, int times = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what is used to be.";

    char *ptr = set(beany, testing);

    show(beany);
    show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);
    show(testing, 3);
    show("Done!");

    delete ptr;

    return 0;
}

char *set(stringy &beany, char *testing)
{
    char *str_memory = new char[strlen(testing) + 1];

    beany.str = str_memory;

    strcpy(str_memory, testing);

    beany.ct = strlen(str_memory);

    return str_memory;
}

void show(const stringy beany, const int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << "Beany Str: " << beany.str << endl
             << "Beany ct: " << beany.ct << endl;
    }
}
void show(const string str, const int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << "Beany Str: " << str << endl;
    }
}