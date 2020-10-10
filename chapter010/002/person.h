#ifndef Person_H_
#define Person_H_

#include <string>
using std::string;

class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person()
    {
        lname = "";
        fname[0] = '\0';
    }
    Person(const string &ln, const char *fn = "Heyyou");

    void show(void) const;
    void Formalshow(void) const;
};

#endif