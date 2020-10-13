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
    int stone;
    double pds_left; //used when do operation between stone and pouns
    double pounds;   // weight in pounds
    char mode;       //mode 1 forstone (default)
                     //mode 2 for interger pounds
                     //mode 3 for fractional pounds

public:
    Stonewt(double lbs, char mo );
    Stonewt(int stn, double lbs, char );
    Stonewt();
    ~Stonewt();
    void show_lbs() const;
    void show_stn() const;

    friend Stonewt operator+(const Stonewt &s1, const Stonewt &s2);
    friend Stonewt operator-(const Stonewt &s1, const Stonewt &s2);
    friend Stonewt operator*(const double n, const Stonewt &s2);

    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

Stonewt::Stonewt() { stone = pds_left = pounds = 0; }
Stonewt::~Stonewt() {}

#endif