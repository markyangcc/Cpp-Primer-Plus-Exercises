#include "person.cpp"

int main()
{
    {
        Person one;
        Person two("Smythecraft");
        Person three("Dimwiddy", "Sam");

        cout << "Person one---" << endl;
        one.show();
        cout << endl;
        one.Formalshow();
        cout << endl;

        cout << "Person two---" << endl;
        two.show();
        cout << endl;
        two.Formalshow();
        cout << endl;

        cout << "Person three---" << endl;
        three.show();
        cout << endl;
        three.Formalshow();
        cout << endl;
    }

    return 0;
}