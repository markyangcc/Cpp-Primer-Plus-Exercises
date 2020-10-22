#include "cd.cpp"
#include "classic.cpp"
#include <iostream>

using namespace std;

void Bravo(const Cd &disk);

int main()
{
     Cd c1{"c1a", "c1b", 1, 1.1};
     Classic c2 = Classic("c2a", "c2b", "c2w", 2, 2.2);

     Cd *pcd = &c1;

     cout << "Using object directly: " << endl;
     c1.Report();
     cout << endl;
     c2.Report();

     cout << endl
          << "Using type Cd * pointer to objects: " << endl;
     pcd->Report();
     cout << endl;

     pcd = &c2;
     pcd->Report();

     cout << endl
          << "Calling a function with Cd reference argument: " << endl;

     Bravo(c1);
     cout << endl;

     Bravo(c2);
     cout << endl;

     cout << endl
          << "Testin assignment: ";
     Classic copy;
     copy = c2;
     copy.Report();
     cout << endl;

     return 0;
}

void Bravo(const Cd &disk)
{
     disk.Report();
}