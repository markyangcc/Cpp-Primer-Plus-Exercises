#include "port.h"
#include <cstring>

Port::Port(const char *br, const char *st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

//copy constructor
Port::Port(const Port &p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p)
{
    if (this == &p)
        return *this;

    delete[] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;

    return *this;
}

Port &Port::operator+=(int b)
{
    this->bottles += b;
    return *this;
} //add

Port &Port::operator-=(int b) //subtract, if availiable
{
    if ((this->bottles - b) < 0)
    {
        std::cout << "Error, don't have so many bottles now." << std::endl;
        exit(EXIT_FAILURE);
    }

    this->bottles -= b;

    return *this;
}

void Port::show() const
{
    using std::cout;
    using std::endl;

    cout << "Brand: " << brand << endl
         << "Kind: " << style << endl
         << "Bottles: " << bottles << endl;
}
std::ostream &operator<<(std::ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;

    return os;
}