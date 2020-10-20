#include "stock.h"
#include <cstring>

Stock::Stock()
{
    company = new char[20];
    company[0] = '\0';

    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::~Stock()
{
    delete[] company;
}

Stock::Stock(const char *co, long n, double pr)
{
    company = new char[20];
    strcpy(company, co);

    if (n < 0)
    {
        std::cout << "Number of shares purchased can't be negative; "
                  << company << " shares set to 0" << std::endl;
    }
    else
        shares = n;

    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        std::cout << "Number of shares sold can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}

std::ostream &operator<<(std::ostream &os, const Stock &s)
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);

    std::streamsize prec = cout.precision(3);

    os << "Company: " << s.company << endl
       << "  Shares: " << s.shares << endl
       << "  Share Price: $" << s.share_val
       << "  Total Worth: $" << s.total_val << endl;

    return os;
}
