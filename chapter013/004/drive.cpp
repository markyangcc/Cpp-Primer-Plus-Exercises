#include "port.cpp"
#include "vintageport.cpp"

int main()
{
    using std::cout;
    using std::endl;

    Port p1;
    p1.show();
    cout << p1;

    cout << endl
         << endl;
    //=============================================================
    Port p2 = {"Gallo", "tawny", 20};
    p2.show();
    cout << p2;

    cout << endl
         << endl;
    //=============================================================
    Port p3 = p2;
    p3.show();
    cout << p3;

    cout << endl
         << endl;
    //=============================================================

    p3 += 3;
    p3.show();
    cout << p3;

    cout << endl
         << "Caution: we have add some bottles now. Look the num increased." << endl;

    cout << endl
         << endl;
    //=============================================================

    p3 -= 3;
    p3.show();
    cout << p3;

    cout << endl
         << "Sorry: Oh, some old friends drunk these new bottles.Look the num decreased." << endl;

    cout << endl
         << endl;
    //=============================================================

    int bo = p3.BottleCount();
    cout << "We have " << bo << " bottles of brand p3 now." << endl;

    cout << endl
         << endl;
    //=============================================================

    VintagePort vp1;
    vp1.show();
    cout << vp1;

    cout << endl
         << endl;
    //=============================================================

    VintagePort vp2 = {"Gallo", 20, "ga", 1909};
    vp2.show();
    cout << vp2;

    cout << endl
         << endl;
    //=============================================================

    VintagePort vp3 = vp2;
    vp3.show();
    cout << vp3;

    cout << endl
         << endl;
    //=============================================================

    return 0;
}