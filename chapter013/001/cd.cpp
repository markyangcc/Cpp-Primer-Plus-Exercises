#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}

Cd::Cd(char *s1, char *s2, int n, double x)
{

    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{

    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd() {}

void Cd::Report() const
{
    using std::cout;
    using std::endl;
    /*
    cout << "Performers: ";
    for (int i = 0; i < strlen(performers); i++)
        cout << performers[i];
    cout << endl;
    cout << "Lable: ";
    for (int i = 0; i < strlen(label); i++)
        cout << label[i];
    cout << endl;
    */

    // << can dispaly array???
    cout << "Performers: " << performers;
    cout << "Lable: " << label;
    cout << "Selection: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd &Cd::operator=(const Cd &d)
{
    if (this == &d)
        return *this;

    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}
