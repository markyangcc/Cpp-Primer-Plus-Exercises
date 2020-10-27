#ifndef WINE_H_
#define WINE_H_

#include <string>
#include <valarray>

using std::pair;
using std::string;

typedef std::valarray<int> ArrayInt;
typedef pair<ArrayInt, ArrayInt> PairArray;

class Wine {
 private:
  string name;
  int year;
  PairArray info;

 public:
  Wine(){};
  ~Wine(){};

  Wine(const char* l, int y, const int yr[], const int bot[]);
  Wine(const char* l, int y);

  void Show() const;

  void GetBottles();
  const string& Label() const;
  int sum() const;
};

#endif