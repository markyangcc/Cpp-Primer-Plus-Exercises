#include "stonewt.cpp"

int main()
{
    Stonewt incognito(276.3, '1');
    Stonewt wolfe(275.2, '1');
    Stonewt talf(21, 8.1, '3');

    //overload operators +,-,* test
    //default print format mode is 1
    cout << "incognito + wolfe: " << incognito + wolfe << endl;
    cout << "incognito - talf: " << incognito - wolfe << endl;
    cout << "talf * 3: " << 3.0 * talf << endl;

    //overload << operator test
    cout << "-----------------------------------" << endl
         << "Incognito: " << incognito << endl
         << "Wolfe: " << wolfe << endl
         << "Talf: " << talf << endl;

    return 0;
}
