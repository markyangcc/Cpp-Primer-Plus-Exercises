#include "wire.h"

#include <cstring>
#include <iostream>

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
    : string(l), PairArray(ArrayInt(y), ArrayInt(y)) {
  year = y;

  // set valarray size
  PairArray::first.resize(year);
  PairArray::second.resize(year);

  for (int i = 0; i < year; i++) {
    PairArray::first[i] = yr[i];
    PairArray::second[i] = bot[i];
  }
}

Wine::Wine(const char *l, int y) : string(l) { year = y; }

void Wine::GetBottles() {
  using std::cin;
  using std::cout;

  // set valarray size
  PairArray::first.resize(year);
  PairArray::second.resize(year);

  for (int i = 0; i < year; i++) {
    cout << "Line[" << i << "]: ";
    cout << "Enter the year: ";
    cin >> PairArray::first[i];
    cout << "Enter the bottles: ";
    cin >> PairArray::second[i];
  }
}

const string &Wine::Label() const { return (const string &)(*this); }

int Wine::sum() const { return PairArray::second.sum(); }

void Wine::Show() const {
  using std::cout;
  using std::endl;

  cout << "Name: " << Label() << endl;
  cout << "Year and bottles:" << endl;

  for (int i = 0; i < PairArray::first.size(); i++) {
    cout << PairArray::first[i] << "\t" << PairArray::second[i] << endl;
  }
}

PairArray &Wine::operator=(PairArray pa) {
  pa.first.resize(year);
  pa.second.resize(year);

  for (int i = 0; i < year; i++) {
    pa.first[i] = pa.first[i];
    pa.second[i] = pa.second[i];
  }
}