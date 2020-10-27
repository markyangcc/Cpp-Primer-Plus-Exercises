#include "wire.h"

#include <cstring>
#include <iostream>

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) {
  name = l;
  year = y;

  //   info.first.resize(year);
  //   info.second.resize(year);

  for (int i = 0; i < year; i++) {
    info.first[i] = yr[i];
    info.second[i] = bot[i];
  }
}

Wine::Wine(const char *l, int y) {
  name = l;
  year = y;
}

void Wine::GetBottles() {
  using std::cin;
  using std::cout;

  for (int i = 0; i < year; i++) {
    cout << "Line[" << i + 1 << "]: ";
    cout << "Enter the year: ";
    cin >> info.first[i];
    cout << "Enter the bottles: ";
    cin >> info.second[i];
  }
}

const string &Wine::Label() const { return name; }
int Wine::sum() const { return info.second.sum(); }

void Wine::Show() const {
  using std::cout;
  using std::endl;

  cout << "Name: " << name << endl;
  cout << "Year and bottles:";

  for (int i = 0; i < info.first.size(); i++) {
    cout << info.first[i] << info.second[i] << endl;
  }
  
}
