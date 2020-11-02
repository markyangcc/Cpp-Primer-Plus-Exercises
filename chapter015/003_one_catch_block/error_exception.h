#ifndef ERROREXCE_H_
#define ERROREXCE_H_

#include <iostream>
#include <string>

class bad_hmean : public std::invalid_argument {
 private:
  double arg1;
  double arg2;
 public:
  bad_hmean(double a, double b, const std::string &s = "")
	  : std::invalid_argument(s), arg1(a), arg2(b) {}
  void meg() const;
};

void bad_hmean::meg() const {
  using std::cout;
  using std::endl;



  cout << R"(Error, hmean() can't accept values like a == -b)" << endl;
  cout << "argu1 = " << arg1 << ", argu2 = " << arg2 << endl;
}

class bad_gmean : public std::domain_error {
 private:
  double arg1;
  double arg2;
 public:
  bad_gmean(double a, double b, const std::string &s = "")
	  : std::domain_error(s), arg1(a), arg2(b) {}
  void meg() const;
};

void bad_gmean::meg() const {
  using std::cout;
  using std::endl;

  cout << R"(Error, Error, gmean() can't accept negative values.)" << endl;
  cout << "argu1 = " << arg1 << ", argu2 = " << arg2 << endl;
}

#endif