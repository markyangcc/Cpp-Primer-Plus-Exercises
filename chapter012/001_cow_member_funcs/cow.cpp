#include "cow.h"

#include <cstring>
#include <iostream>


Cow::Cow()
{
    name[0] = '\0';
    hobby = nullptr;
    weight = 0;
};

Cow::Cow(const char *nm, const char *ho, double wt)
{
    strncpy(name, nm, strlen(nm) + 1);

    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);

    weight = wt;
}
Cow::Cow(const Cow &c)
{
    strncpy(name, c.name, strlen(c.name) + 1);

    if (c.hobby == nullptr)
        hobby = nullptr;
    else
    {
        hobby = new char[strlen(c.hobby) + 1];
        strcpy(hobby, c.hobby);
    }

    weight = c.weight;
}
Cow::~Cow()
{
    delete[] hobby;
   
}

Cow &Cow::operator=(const Cow &c)
{
    strncpy(name, c.name, strlen(c.name) + 1);

    if (c.hobby == nullptr)
        hobby = nullptr;
    else
    {
        hobby = new char[strlen(c.hobby) + 1];
        strcpy(hobby, c.hobby);
    }
    weight = c.weight;

    return *this;
}

void Cow::showCow() const
{
    using std::cout;
    using std::endl;

    cout << "Name: " << name << endl
         << "Hobby: " << (NULL == hobby ? "" : hobby) << endl
         //  << "Hobby: " << hobby << endl //Really Error display
         << "Weight:" << weight << endl;
}