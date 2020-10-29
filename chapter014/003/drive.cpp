#include <cstring>
#include <iostream>

#include "queuetp.h"
#include "workermi.cpp"
const int SIZE = 5;

int main()
{
    {
        using std::cin;
        using std::cout;
        using std::endl;
        using std::strchr;

        Queuetp<Worker *> q;
        Worker *lolas;

        int ct;
        for (ct = 0; ct < SIZE; ct++)
        {
            char choice;
            cout << "Enter the employee category:" << endl
                 << "w: waiter  s: singer  "
                 << "t: singing waiter  q: quit" << endl;
            cin >> choice;
            while (strchr("wstq", choice) == NULL)
            {
                cout << "Please enter a w, s, t, or q: ";
                cin >> choice;
            }

            if (choice == 'q')
                break;

            switch (choice)
            {
            case 'w':
                lolas = new Waiter;
                break;
            case 's':
                lolas = new Singer;
                break;
            case 't':
                lolas = new SingingWaiter;
                break;
            default:
                break;
            }

            while (getchar() != '\n')
                continue;

            lolas->Set();
            q.enqueue(lolas);
        }

        cout << endl
             << "Here is your staff:" << endl;
        int i;
        for (i = 0; i < ct; i++)
        {
            cout << endl;
            q.dequeue(lolas);
            lolas->Show();
            delete lolas;
        }
        cout << "Bye.\n";

        return 0;
    }
}
