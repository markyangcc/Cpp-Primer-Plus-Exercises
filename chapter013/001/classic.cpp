#include "classic.h"
#include <cstring>
#include <iostream>

Classic::Classic() : Cd()
{
    work[0] = '\0';
}

Classic::Classic(char *w, char *s1, char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    strcpy(work, w);
}

Classic::Classic(const Cd &d, char *w) : Cd(d)
{
    strcpy(work, w);
}

Classic::~Classic() {}

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

    strcpy(work, d.work);

    return *this;
}
