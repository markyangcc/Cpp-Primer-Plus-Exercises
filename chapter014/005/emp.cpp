#include "emp.h"

abstr_emp::abstr_emp() = default;

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j)
{
    fname = fn;
    lname = ln;
    job = j;
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e)
{
    os << e.fname << "  " << e.lname << std::endl;
    return os;
}

void abstr_emp::ShowAll() const
{
    std::cout << "First name: " << fname << std::endl
              << "Last name: " << lname << std::endl
              << "Job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
    using std::cin;
    using std::cout;

    cout << "Enter first name: ";
    cin >> fname;
    while (cin.get() != '\n')
        continue;

    cout << "Enter last name: ";
    cin >> lname;
    while (cin.get() != '\n')
        continue;

    cout << "Enter the job: ";
    getline(cin, job);
}

abstr_emp::~abstr_emp() = default;
