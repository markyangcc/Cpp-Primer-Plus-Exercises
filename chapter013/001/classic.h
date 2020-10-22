#ifndef CLASSIC_H_
#define CLASSIC_H_

#include "cd.h"

class Classic : public Cd
{
private:
    char work[100];

public:
    Classic();

    Classic(const char *w, const char *s1, const char *s2, int n, double x);
    Classic(const Cd &d, char *w);
    Classic(const Classic &c);

    virtual ~Classic();

    virtual void Report() const;
    virtual Classic &operator=(const Classic &d);
};

#endif