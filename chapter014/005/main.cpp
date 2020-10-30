// Q1: use constructor to create new derived class
// Q2: we need to add new methods in derived classes
// Q3: because use virtual base class will avoid many problems in MI(Multiple inherit)
// Q4: don't need
// Q5: overloading friend operator << can be access in all derived classes
// Q6: will cause error, " error: array of abstract class type 'abstr_emp' "

#include "emp.h"
#include "employee.h"
#include "fink.h"
#include "highfink.h"
#include "manager.h"
#include <iostream>

using namespace std;

int main()
{
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();

    highfink hf(ma, "Curly Kew"); //recruitment?
    hf.ShowAll();
    cout << "Press a key for next phase:" << endl;
    cin.get();

    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp * pointer:" << endl;
    abstr_emp *tri[4] = {&em, &fi, &hf, &hf2};

    for (auto &i : tri)
        i->ShowAll();

    return 0;
}