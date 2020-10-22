#ifndef CD_H_
#define CD_H_

class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;

public:
    Cd();
    Cd(const char *s1, const char *s2, int n, double x);
    Cd(const Cd &d);
    virtual ~Cd();

    virtual void Report() const;
    virtual Cd &operator=(const Cd &d);
};

#endif
