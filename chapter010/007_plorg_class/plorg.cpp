#include "plorg.h"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char *na, int value)
{
    strncpy(name, na, strlen(na) + 1);
    ci = value;
}

void Plorg::set_ci(int value)
{
    ci = value;
}
void Plorg::show_plorg() const
{
    using std::cout;
    using std::endl;

    cout << "Name: " << name << endl
         << "CI: " << ci << endl;
}
Plorg::~Plorg(){};
