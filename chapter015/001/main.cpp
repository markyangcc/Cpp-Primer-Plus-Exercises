//
// Created by mark on 11/1/20.
//

#include "Tv.h"
#include <iostream>

int main()
{

  using std::cout;
  using std::endl;

  Tv s42;
  cout << "Initial setting for 42 Tv: " << endl;

  s42.settings();

  s42.onoff();
  s42.chanup();

  cout << endl
       << "Adjust settings for 42 Tv: " << endl;
  s42.chanup();
  cout << endl
       << "Adjusted settings for 42 Tv: " << endl;
  s42.settings();

  Remote grey;
  grey.set_chan(s42, 10);
  grey.volup(s42);
  grey.volup(s42);

  cout << endl
       << "42 settings after using remote: " << endl;
  s42.settings();

  Tv s58(Tv::On);
  s58.set_mode();
  grey.set_chan(s58, 28);

  cout << endl
       << "58 settings: " << endl;
  s58.settings();

  return 0;
}