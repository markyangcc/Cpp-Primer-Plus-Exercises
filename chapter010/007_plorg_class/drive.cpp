#include "plorg.cpp"

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    const int Limit = 20;

    //default name and ci
    Plorg p1;
    p1.show_plorg();

    //Modify name and ci
    cout << "Enter new plorg name: ";
    char ar[Limit];
    cin >> ar;
    Plorg p2(ar);

    cout << "Enter new CI: ";
    int va;
    cin >> va;
    p2.set_ci(va);
    p2.show_plorg();

    return 0;
}