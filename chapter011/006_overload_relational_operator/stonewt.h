#ifndef Stonewt_H_
#define Stonewt_H_
#include <iostream>

class Stonewt
{
private:
    enum
    {
        Lbs_per_stn = 14
    };
    int stone;       //this variable is not needed in fact
    double pds_left; //this variable is not needed in fact
    double pounds;   //needed variable

public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();

    friend bool operator>(const Stonewt &s1, const Stonewt &s2);
    friend bool operator<(const Stonewt &s1, const Stonewt &s2);
    friend bool operator>=(const Stonewt &s1, const Stonewt &s2);
    friend bool operator<=(const Stonewt &s1, const Stonewt &s2);
    friend bool operator==(const Stonewt &s1, const Stonewt &s2);
    friend bool operator!=(const Stonewt &s1, const Stonewt &s2);

    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

Stonewt::Stonewt() { stone = pds_left = pounds = 0; }
Stonewt::~Stonewt() {}

#endif