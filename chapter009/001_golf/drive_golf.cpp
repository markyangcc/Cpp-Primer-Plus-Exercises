#include "golf.h"
#include <iostream>

using namespace std;

int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    cout << "Info about golf ann: " << endl;
    showgolf(ann);
    cout << endl;

    cout << "Reset handicap of golf ann: " << endl;
    handicap(ann, 12);
    showgolf(ann);
    cout << endl;

    golf andy;
    int rval = setgolf(andy);
    if (rval == 0)
        cout << "Non name inputed." << endl;
    else
    {
        cout << endl;
        cout << "Info about golf andy: " << endl;
        showgolf(andy);
        cout << endl;
    }
}