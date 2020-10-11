#include "golf.h"
#include <cstring>
#include <iostream>

Golf::Golf(const char *name, int hc)
{
    strncpy(fullname, name, strlen(name) + 1);
    handicap = hc;
}

void Golf::setgolf()
{
    std::cout << "Enter the Golf fullname: ";
    std::cin.getline(fullname, Len);

    std::cout << "Enter the Golf handicap: ";
    std::cin >> handicap;

    Golf player(fullname, handicap);
    *this = player;
}

void Golf::rset_handicap(int hc)
{
    handicap = hc;
}

void Golf::showgolf() const
{
    std::cout << "Fullname: " << fullname << std::endl
              << "Handicap: " << handicap << std::endl;
}