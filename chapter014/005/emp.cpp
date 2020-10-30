//
// Created by mark on 10/30/20.
//

#include "emp.h"

abstr_emp::abstr_emp() = default;

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j) {

    fname = fn;
    lname = ln;
    job = j;
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e) {

    os << e.fname << "  " << e.lname << std::endl;
    return os;
}

void abstr_emp::ShowAll() const {

    std::cout << "First name: " << fname << std::endl
              << "Last name: " << lname << std::endl
              << "Job: " << job << std::endl;
}

void abstr_emp::SetAll() {
//TODO:
}

abstr_emp::~abstr_emp() = default;

