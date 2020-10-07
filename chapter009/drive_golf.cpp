#include "golf.h"
#include <iostream>

using namespace std;

int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf andy;
    int rval = setgolf(andy);
    if (rval == 0)
        cout << "Non name inputed." << endl;
    
    showgolf(andy);
}