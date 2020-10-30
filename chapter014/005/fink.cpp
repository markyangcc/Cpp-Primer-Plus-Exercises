//
// Created by mark on 10/30/20.
//

#include "fink.h"
#include "emp.h"

//what is default constructor works
fink::fink() = default;

fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo) : abstr_emp(fn,
                                                                                                                   ln,
                                                                                                                   j) {
    reportsto = rpo;
}

fink::fink(const abstr_emp &e, const std::string &rpo) : abstr_emp(e) {
    reportsto = rpo;
}

fink::fink(const fink &e) : abstr_emp(e) {
    reportsto = e.reportsto;
}

void fink::ShowAll() const {
    abstr_emp::ShowAll();
    std::cout << "Reportsto: " << reportsto << std::endl;
}

void fink::SetAll() {

    abstr_emp::SetAll();

    std::cout << "Enter reportsto: ";
    std::cin >> reportsto;
    while (std::cin.get() != '\n')
        continue;

}
