//
// Created by mark on 10/30/20.
//

#include "highfink.h"
#include "fink.h"
#include "manager.h"
#include "emp.h"

highfink::highfink() = default;

highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo,
                   int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {

}

highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo) {

}

highfink::highfink(const fink &f, int ico) : fink(f), manager(f, ico) {

}

highfink::highfink(const manager &m, const std::string &rpo) : manager(m), fink(m, rpo) {

}


highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h) {

}

void highfink::ShowAll() const {
    using std::cout;
    using std::endl;

    manager::ShowAll();
    cout << "Reportsto:" << fink::ReportsTo() << std::endl;

}

void highfink::SetAll() {

    manager::SetAll();

    std::cout << "Enter reportsto: ";
    std::cin >> fink::ReportsTo();
    while (std::cin.get() != '\n')
        continue;

}
