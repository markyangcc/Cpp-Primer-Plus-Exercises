#ifndef Mytime_H_
#define Mytime_H_

class Time
{
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);
    void addmin(int m);
    void addhr(int h);
    void reset(int h = 0, int m = 0);
    Time operator+(const Time &t) const;
    void show() const;
    ~Time();
};

Time::Time()
{
}

Time::~Time()
{
}

#endif
