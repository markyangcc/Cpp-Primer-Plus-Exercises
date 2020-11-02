#include <cmath>
#include <exception>
#include <iostream>

double hmean(double a, double b);
double gmean(double a, double b);

int main() {
  using std::cin;
  using std::cout;
  using std::endl;

  double x, y;

  cout << "Enter two numbers: ";

  while (cin >> x >> y) {
    try {
     
      cout << "Harmonic mean of " << x << " and " << y << " is " << hmean(x, y)
           << endl;
      cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y)
           << endl;

      cout << "Enter the next set of numbers <q to quit>: ";

    } catch (const std::invalid_argument& ia) {
      std::cerr << ia.what() << '\n';
      continue;
    } catch (const std::domain_error& de) {
      std::cerr << de.what() << '\n';
      break;
    }
  }

  cout << "Bye!" << endl;

  return 0;
}

double hmean(double a, double b) {
  if (a == -b)
    throw std::invalid_argument(
        "Error, hmean() can't accept values like a == -b");
  return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
  if (a < 0 || b < 0)
    throw std::domain_error("Error, gmean() can't accept negative values.");
  return sqrt(a * b);
}
