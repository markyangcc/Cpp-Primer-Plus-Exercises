//
// Created by mark on 10/30/20.
//

#ifndef UNTITLED_HIGHFINK_H
#define UNTITLED_HIGHFINK_H

#include "manager.h"
#include "fink.h"

class highfink : public manager, public fink {

public:
    highfink();

    highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico);

    highfink(const abstr_emp &e, const std::string &rpo, int ico);

    highfink(const fink &f, int ico);

    highfink(const manager &m, const std::string &rpo);

    explicit highfink(abstr_emp h);

    void ShowAll() const override;

    virtual void SetAll();
};


#endif //UNTITLED_HIGHFINK_H
