#ifndef Bank_H_
#define Bank_H_

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Bank
{
private:
    string name;
    string account;
    double money;

public:
    Bank(const string &na, const string &ac, const double mo = 0.0);

    void display(void) const;
    void desposit(double cash);
    void withdraw(double cash);

    ~Bank();
};

#endif
