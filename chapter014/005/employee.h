//
// Created by mark on 10/30/20.
//

#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H

#include "emp.h"
#include "employee.h"

class employee : public abstr_emp {

public:
    employee();

    employee(const std::string &fn, const std::string &ln, const std::string &j);

    virtual void ShowAll() const;

    virtual void SetAll();
};


#endif //UNTITLED_EMPLOYEE_H
