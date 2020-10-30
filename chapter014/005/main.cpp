//
// Created by mark on 10/30/20.
//


#include <iostream>
#include "emp.h"
#include "employee.h"
#include "manager.h"
#include "fink.h"
#include "highfink.h"

using namespace std;

int main() {

    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();


    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();

    highfink hf(ma, "Curly Kew");//recruitment?
    hf.ShowAll();
    cout << "Press a key for next phase:" << endl;
    cin.get();

    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp * pointer:" << endl;
    abstr_emp *tri[4] = {&em, &fi, &hf, &hf2};

    for(auto & i : tri) {
        i->ShowAll();
    }

    return 0;
}