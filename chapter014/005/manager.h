#ifndef UNTITLED_MANAGER_H
#define UNTITLED_MANAGER_H

#include "emp.h"

class manager : virtual public abstr_emp
{
private:
    int inchargeof; //number of abstr_emp managed
protected:
    int InChargeOf() const { return inchargeof; }

    int &InChargeOf() { return inchargeof; }

public:
    manager();

    manager(const std::string &fn, const std::string &ln, const std::string &j, int ico = 0);

    manager(const abstr_emp &e, int ico);

    manager(const manager &m);

    void ShowAll() const override;

    void SetAll() override;
};

#endif //UNTITLED_MANAGER_H
