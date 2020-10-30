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

    explicit highfink(const highfink &h);

    void ShowAll() const override;

    void SetAll() override;
};


#endif //UNTITLED_HIGHFINK_H
