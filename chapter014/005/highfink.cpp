#include "highfink.h"
#include "emp.h"
#include "fink.h"
#include "manager.h"

highfink::highfink() = default;

highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo,
                   int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink &f, int ico) : manager(f, ico), fink(f) {}

highfink::highfink(const manager &m, const std::string &rpo) : manager(m), fink(m, rpo) {}

highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const
{
    manager::ShowAll();
    std::cout << "Reportsto:" << fink::ReportsTo() << std::endl;
}

void highfink::SetAll()
{
    manager::SetAll();

    std::cout << "Enter reportsto: ";
    std::cin >> fink::ReportsTo();

    while (std::cin.get() != '\n')
        continue;
}
