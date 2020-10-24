#include "classic.h"
#include <cstring>
#include <iostream>

Classic::Classic() : Cd()
{
    work = new char[1];
    work[0] = '\0';
}

Classic::Classic(const char *w, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    work = new char[strlen(w) + 1];
    strcpy(work, w);
}

Classic::Classic(const Cd &d, char *w) : Cd(d)
{
    work = new char[strlen(w) + 1];
    strcpy(work, w);
}

Classic::~Classic()
{
    delete[] work;
}

void Classic::Report() const
{
    using std::cout;
    using std::endl;

    Cd::Report();

    cout << "Work: " << work;
}

Classic &Classic::operator=(const Classic &d)
{
    if (this == &d)
        return *this;

    Cd::operator=(d);

    work = new char[strlen(d.work) + 1];
    strcpy(work, d.work);

    return *this;
}
