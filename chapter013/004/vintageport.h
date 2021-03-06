#ifndef VINTAGEPORT_H_
#define VINTAGEPORT_H_

#include "port.h"

class VintagePort : public Port
{
private:
    char *nickname;
    int year;

public:
    VintagePort();
    VintagePort(const char *br, int b, const char *nm, int y);
    VintagePort(const VintagePort &vp);

    ~VintagePort() { delete[] nickname; }

    VintagePort &operator=(const VintagePort &vp);
    void show() const;

    friend std::ostream &operator<<(std::ostream &os, const VintagePort &vp);
};

#endif