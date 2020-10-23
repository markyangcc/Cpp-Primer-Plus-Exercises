#ifndef PORT_H_
#define PORT_H_

#include <iostream>

class Port
{
private:
    char *brand;
    char style[20];
    int bottles;

public:
    Port(const char *br = "none", const char *st = "none", int b = 0);
    Port(const Port &p); //copy constructor

    virtual ~Port() { delete[] brand; };

    Port &operator=(const Port &p);
    Port &operator+=(int b); //add
    Port &operator-=(int b); //subtract

    int BottleCount() const { return bottles; }
    virtual void show() const;
    friend std::ostream &operator<<(std::ostream &os, const Port &p);
};

#endif