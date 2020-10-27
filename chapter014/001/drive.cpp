#include <iostream>

#include "wire.cpp"

int main(void) {
  using std::cin;
  using std::cout;
  using std::endl;

  cout << "Enter name of wine: ";
  char lab[50];
  cin.getline(lab, 50);
  cout << "Enter number of years: ";
  int yrs;
  cin >> yrs;

  Wine holding(lab, yrs);  // store label,years
  holding.GetBottles();    // solicit input for year,bottles count
  holding.Show();

  const int YRS = 3;
  int y[YRS] = {1993, 1995, 1998};
  int b[YRS] = {48, 60, 72};

  Wine more("Gushing GRape Red", YRS, y, b);
  more.Show();
  cout << "Total bottles for " << more.Label() << ": " << more.sum() << endl;
  cout << "Bye!";

  return 0;
}