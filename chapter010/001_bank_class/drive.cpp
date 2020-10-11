#include "bank.cpp"
#include "bank.h"

int main()
{
    {
        cout << "Using constructors to create new objects" << endl;

        Bank user1("Ming", "123456789", 25.6);
        user1.display();

        user1.desposit(10);
        user1.display();

        user1.withdraw(10);
        user1.display();

        cout << "Done!" << endl;
    }

    return 0;
}