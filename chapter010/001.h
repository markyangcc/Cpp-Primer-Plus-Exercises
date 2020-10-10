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

Bank::Bank(const string &na, const string &ac, const double mo)
{
    if (mo < 0)
    {
        cout << "Desposit can't be negative, we are not credit card." << endl
             << na << " money set to 0 automaticly." << endl;

        money = 0.0;
    }
    else
        money = mo;

    name = na;
    account = ac;
}

Bank::~Bank()
{
}

void Bank::display(void) const
{
    cout << "Name: " << name << endl
         << "Account: " << account << endl
         << "Money: " << money << endl;
}
