#include "bank.h"

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
void Bank::desposit(double cash)
{
    if (cash < 0)
    {
        cout << "Desposit can't be negative, please choose withdraw service otherwise" << endl
             << "Current money of " << account << " is " << money << endl;
    }
    else
        money += cash;
}
void Bank::withdraw(double cash)
{
    if (cash < 0)
    {
        cout << "Withdraw can't be negative, please choose desposit service otherwise" << endl
             << "Current money of " << account << " is " << money << endl;
    }
    else
        money -= cash;
}