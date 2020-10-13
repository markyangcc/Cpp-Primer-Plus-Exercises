#include "stonewt.h"
#include <iostream>

using std::cout;
using std::endl;

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

bool operator>(const Stonewt &s1, const Stonewt &s2)
{
    if (s1.pounds > s2.pounds)
        return true;
    else
        return false;
}
bool operator<(const Stonewt &s1, const Stonewt &s2)
{
    if (s1.pounds < s2.pounds)
        return true;
    else
        return false;
}
bool operator>=(const Stonewt &s1, const Stonewt &s2)
{
    if (s1.pounds >= s2.pounds)
        return true;
    else
        return false;
}
bool operator<=(const Stonewt &s1, const Stonewt &s2)
{
    if (s1.pounds <= s2.pounds)
        return true;
    else
        return false;
}
bool operator==(const Stonewt &s1, const Stonewt &s2)
{
    if (s1.pounds == s2.pounds)
        return true;
    else
        return false;
}
bool operator!=(const Stonewt &s1, const Stonewt &s2)
{
    if (s1.pounds != s2.pounds)
        return true;
    else
        return false;
}

std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
    os << s.pounds << " pounds" << endl;

    return os;
}