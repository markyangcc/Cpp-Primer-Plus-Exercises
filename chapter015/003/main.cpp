#include "error_exception.h"

#include <cmath>
#include <exception>
#include <iostream>

double hmean(double a, double b);
double gmean(double a, double b);

int main() {
  using std::cout;
  using std::endl;
  using std::cin;

  double x, y;

  cout << "Enter two numbers: ";
  while (cin >> x >> y) {
	try {
	  cout << "Harmonic mean of " << x << " and " << y
		   << " is " << hmean(x, y) << endl;
	  cout << "Geometric mean of " << x << " and " << y
		   << " is " << gmean(x, y) << endl;
	  cout << "Enter next set of numbers <q to quit>: ";
	}
	catch (std::exception &e) {
	  if (typeid(bad_hmean &) == typeid(e)) {
		auto &bhm = dynamic_cast<bad_hmean &>(e);
		bhm.meg();
		continue;
	  } else if (typeid(bad_gmean &) == typeid(e)) {
		auto &bgm = dynamic_cast<bad_gmean &>(e);
		bgm.meg();
		break;
	  }

	}
  }
  cout << "Bye!" << endl;

  return 0;
}

double hmean(double a, double b) {
  if (a == -b)
	throw bad_hmean(a, b);
  return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
  if (a < 0 || b < 0)
	throw bad_gmean(a, b);
  return std::sqrt(a * b);
}
