#ifndef GOlf_H_
#define Golf_H_

class Golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;

public:
    Golf(const char *name = "\0", int hc = 0);

    void setgolf();
    void rset_handicap(int hc);
    void showgolf() const;

    ~Golf(){};
};

#endif
