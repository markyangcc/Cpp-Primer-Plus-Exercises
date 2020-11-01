//
// Created by mark on 11/1/20.
//

#include <iostream>

#include "Tv.cpp"

int main() {
  using std::cout;
  using std::endl;

  Tv s42;
  cout << "Initial setting for 42 Tv: " << endl;

  s42.settings();

  s42.onoff();
  s42.chanup();

  cout << endl << "Adjust settings for 42 Tv: " << endl;
  s42.chanup();
  cout << endl << "Adjusted settings for 42 Tv: " << endl;
  s42.settings();

  Remote grey;
  grey.set_chan(s42, 10);
  grey.volup(s42);
  grey.volup(s42);

  cout << "Test for new remote mode feature(When Tv is On)---------------------"
       << endl;
  cout << "Remote grey state: " << endl;
  grey.show_mode();

  cout << endl;

  s42.set_remote_mode(grey);
  cout << "After set, remote grey state: " << endl;
  grey.show_mode();
  cout << "Test new feature end(When Tv is On)---------------------------------"
       << endl;

  cout << endl << "42 settings after using remote: " << endl;
  s42.settings();

  Tv s58(Tv::On);
  s58.set_mode();
  grey.set_chan(s58, 28);

  cout << "Test for new remote mode feature(When Tv is Off)--------------"
       << endl;
  cout << "Remote grey state: " << endl;
  grey.show_mode();

  cout << endl;

  s42.set_remote_mode(grey);
  cout << "After set, remote grey state: " << endl;
  grey.show_mode();
  cout << "Test new feature end(When Tv is Off)-------------------------"
       << endl;

  cout << endl << "58 settings: " << endl;
  s58.settings();

  return 0;
}