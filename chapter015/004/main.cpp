

#include <iostream>

#include "sales.h"

int main() {
  using std::cin;
  using std::cout;
  using std::endl;

  double vals1[12] = {1220, 1100, 1122, 2212,  1232, 2334,
                      2220, 2100, 2122, 32212, 2232, 3334};

  double vals2[12] = {12, 11, 22, 21, 23, 32, 25, 35, 36, 45, 56, 48};

  Sales sales1(2011, vals1, 12);
  LabeledSales sales2("Blogstar", 2012, vals2, 12);

  cout << "First rty block:" << endl;

  try {
    int i;
    cout << "Year: " << sales1.Year() << endl;

    for (i = 0; i < 12; ++i) {
      cout << sales1[i] << ' ';
      if (i % 6 == 5) cout << endl;
    }

    cout << "Year: " << sales2.Year() << endl;
    cout << "Label: " << sales2.Label() << endl;

    for (i = 0; i < 12; ++i) {
      cout << sales2[i] << ' ';
      if (i % 6 == 5) cout << endl;
    }

  } catch (Sales::bad_index &bad) {
    cout << bad.what();
    if (typeid(LabeledSales::nbad_index &) == typeid(bad)) {
      auto &nbi = dynamic_cast<LabeledSales::nbad_index &>(bad);
      cout << "Company: " << nbi.label_val() << endl;
    }
    cout << "bad index: " << bad.bi_val() << endl;
  }

  cout << "\nNext try block:\n";
  try {
    sales2[2] = 37.5;
    sales1[20] = 23345;
    cout << "End of try block 2.\n";
  } catch (Sales::bad_index &bad) {
    cout << bad.what();
    if (typeid(LabeledSales::nbad_index &) == typeid(bad)) {
      auto &nbi = dynamic_cast<LabeledSales::nbad_index &>(bad);
      cout << "Company: " << nbi.label_val() << endl;
    }
    cout << "bad index: " << bad.bi_val() << endl;
  }
  cout << "done\n";

  return 0;
}