#ifndef UNTITLED_FINK_H
#define UNTITLED_FINK_H

#include "emp.h"

class fink : virtual public abstr_emp
{
private:
    std::string reportsto; //to whom fink reports
protected:
    std::string ReportsTo() const { return reportsto; }
    std::string &ReportsTo() { return reportsto; }

public:
    fink();
    fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo);
    fink(const abstr_emp &e, const std::string &rpo);
    fink(const fink &e);
    void ShowAll() const override;
    void SetAll() override;
};

#endif //UNTITLED_FINK_H
