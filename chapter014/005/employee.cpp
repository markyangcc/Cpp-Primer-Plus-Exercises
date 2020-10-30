//
// Created by mark on 10/30/20.
//

#include "employee.h"
#include "emp.h"

employee::employee() = default;

employee::employee(const std::string &fn, const std::string &ln, const std::string &j) : abstr_emp(fn, ln, j) {

}

void employee::ShowAll() const {
    abstr_emp::ShowAll();
}

void employee::SetAll() {

}
