#include "golf.h"
#include <cstring>
#include <iostream>

//non-interactive version:
void setgolf(golf &g, const char *name, int hc)
{
    strncpy(g.fullname, name, strlen(name) + 1);
    g.handicap = hc;
}

//interactive version:
int setgolf(golf &g)
{
    std::cout << "Enter the golf fullname: ";
    std::cin.getline(g.fullname, Len);

    // empty string return 0
    if (!strcmp(g.fullname,""))
        return 0;

    std::cout << "Enter the golf handicap: ";
    std::cin >> g.handicap;

    return 1;
}

//reset handicaps
void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

//display
void showgolf(const golf &g)
{
    std::cout  << "Fullname: " << g.fullname << std::endl
              << "Handicap: " << g.handicap << std::endl;
}