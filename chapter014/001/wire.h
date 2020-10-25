#ifndef WINE_H_
#define WINE_H_

#include <string>
#include "mypair.cpp"

using std::string;

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
private:
    string name;
    int year;
    PairArray info;

public:
    Wine();
    ~Wine();

    Wine(const char *l, int y, const int yr[], const int bot[]);
    Wine(const char *l, int y);

    void GetBottles();
    Wine &Label();
    int sum();
};

#endif