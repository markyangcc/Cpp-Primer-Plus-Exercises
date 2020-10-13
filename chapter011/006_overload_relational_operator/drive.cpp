#include "stonewt.cpp"

int main()
{
    Stonewt incognito(276.3);
    Stonewt wolfe(276.3);

    bool status;

    status = (incognito > wolfe);
    cout << "incognito > wolfe: " << std::boolalpha << status << endl;

    status = (incognito < wolfe);
    cout << "incognito < wolfe: " << std::boolalpha << status << endl;

    status = (incognito >= wolfe);
    cout << "incognito >= wolfe: " << std::boolalpha << status << endl;

    status = (incognito <= wolfe);
    cout << "incognito <= wolfe: " << std::boolalpha << status << endl;

    status = (incognito == wolfe);
    cout << "incognito == wolfe: " << std::boolalpha << status << endl;

    status = (incognito != wolfe);
    cout << "incognito != wolfe: " << std::boolalpha << status << endl;

    //overload << operator test
    cout
        << "-----------------------------------" << endl
        << "Incognito: " << incognito << endl
        << "Wolfe: " << wolfe << endl;

    return 0;
}
