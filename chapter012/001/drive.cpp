#include "cow.cpp"

int main()
{
  //Default construstor
  Cow cowa;
  cowa.showCow();
  std::cout << std::endl;

  //Explicit construstor
  Cow cowb = {"cowb", "Eat grass", 100.1};
  cowb.showCow();
  std::cout << std::endl;

  //Copy construstor
  Cow cowc = cowa;
  cowc.showCow();
  std::cout << std::endl;

  return 0;
}