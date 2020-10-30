#ifndef UNTITLED_EMP_H
#define UNTITLED_EMP_H

#include <iostream>
#include <string>

class abstr_emp
{
private:
    std::string fname;
    std::string lname;
    std::string job;

public:
    abstr_emp();

    abstr_emp(const std::string &fn, const std::string &ln, const std::string &j);

    virtual void ShowAll() const;

    virtual void SetAll();

    friend std::ostream &operator<<(std::ostream &os, const abstr_emp &e);

    virtual ~abstr_emp() = 0; //virtual base class
};

#endif //UNTITLED_EMP_H
