#include "person.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Person::Person(const string &ln, const char *fn)
{
    lname = ln;

    int str_len = strlen(fn);
    if (str_len >= 25 - 1)
    {
        cout << "Error, name length limit to " << LIMIT << " characters" << endl
             << "Program exited." << endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < str_len; i++)
        strncpy(fname, fn, str_len + 1);
}

void Person::show() const
{
    cout << "First name: " << fname << endl
         << "Last name: " << lname << endl;
}
void Person::Formalshow() const
{
    cout << "Last name: " << lname << endl
         << "First name: " << fname << endl;
}