#include "vintageport.h"
#include <cstring>

//not for sure for style(init)
VintagePort::VintagePort() : Port() //style neccessary = "vintage"
{
    nickname = new char[1];
    nickname[0] = '\0';

    year = 0;
}
VintagePort::VintagePort(const char *br, int b, const char *nm, int y) : Port(br, "vintage", b)
{
    nickname = new char[strlen(nm) + 1];
    strcpy(nickname, nm);
    year = y;
}
VintagePort::VintagePort(const VintagePort &vp) : Port(vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if (this == &vp)
        return *this;

    Port(vp);
    delete[] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;

    return *this;
}
void VintagePort::show() const
{
    using std::cout;
    using std::endl;

    Port::show();
    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
}

std::ostream &operator<<(std::ostream &os, const VintagePort &vp)
{
    os << (const Port &)vp;
    os << ", " << vp.nickname << ", " << vp.year;

    return os;
}