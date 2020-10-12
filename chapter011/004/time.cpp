#include "time.h"
#include <iostream>

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int n)
{
    hours = h;
    minutes = n;
}

void Time::addmin(int m)
{
    minutes += m;
    hours = minutes / 60;
    minutes %= 60;
}

void Time::addhr(int h)
{
    hours += h;
}

void Time::reset(int h = 0, int m = 0)
{
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + sum.minutes / 60;
    sum.minutes %= 60;

    return sum;
}

void Time::show() const
{
    std::cout << hours << " hours" << minutes << " minutes";
}