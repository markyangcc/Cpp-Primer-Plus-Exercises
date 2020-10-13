#include "stonewt.h"
#include <iostream>

using std::cout;
using std::endl;

Stonewt::Stonewt(double lbs, char mo)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = mo;
}
Stonewt::Stonewt(int stn, double lbs, char mo)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    mode = mo;
}

Stonewt operator+(const Stonewt &s1, const Stonewt &s2)
{
    Stonewt sum;

    sum.pounds = s1.pounds + s2.pounds;
    sum.stone = s1.stone + s2.stone;
    sum.pds_left = s1.pds_left + s2.pds_left;

    return sum;
}

Stonewt operator-(const Stonewt &s1, const Stonewt &s2)
{
    Stonewt diff;

    diff.pounds = s1.pounds - s2.pounds;
    diff.stone = s1.stone - s2.stone;
    diff.pds_left = s1.pds_left - s2.pds_left;

    return diff;
}

Stonewt operator*(const double n, const Stonewt &s)
{
    Stonewt result;

    result.pounds = s.pounds * n;
    result.stone = s.stone * n;
    result.pds_left = s.pds_left * n;

    return result;
}

std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
    if (s.mode == '1')
    {
        os << "Mode " << s.mode << endl
           << s.pounds << " pounds" << endl
           << s.stone << " stone, " << s.pds_left << " pounds" << endl;
    }
    else if (s.mode == '2')
    {
        os << "Mode " << s.mode << endl
           << int(s.pounds) << " pounds" << endl;
    }
    else if (s.mode == '3')
    {
        os << "Mode " << s.mode << endl
           << s.pounds << " pounds" << endl;
    }
    else
    {
        //default print format
        os << "Mode " << s.mode << endl
           << s.pounds << " pounds" << endl
           << s.stone << " stone, " << s.pds_left << " pounds" << endl;
    }

    return os;
}