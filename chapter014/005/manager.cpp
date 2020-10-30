//
// Created by mark on 10/30/20.
//

#include "manager.h"
#include "emp.h"

manager::manager() = default;


manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico) : abstr_emp(fn, ln, j) {
    inchargeof = ico;
}

//can this run?
//abstr_emp(const abstr_emp &m)
manager::manager(const abstr_emp &e, int ico) : abstr_emp(e) {
    inchargeof = ico;
}

//can this run?
manager::manager(const manager &m) : abstr_emp(m) {
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const {
    abstr_emp::ShowAll();
    std::cout << "Ico: " << inchargeof << std::endl;
}


void manager::SetAll() {

}


