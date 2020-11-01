//
// Created by mark on 11/1/20.
//

#include "Tv.h"

#include <iostream>

Tv::Tv(int s, int mc)
    : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
void Tv::onoff() { state = (state == On) ? Off : On; }
bool Tv::ison() const { return state == On; }

bool Tv::volup() {
  if (volume < Tv::Maxval) {
    volume++;
    return true;
  } else
    return false;
}

bool Tv::voldown() {
  if (volume > Tv::Minval) {
    volume--;
    return true;
  } else
    return false;
}

void Tv::chanup() {}
void Tv::chandown() {}

void Tv::set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
void Tv::set_input() { (input = (input == TV) ? DVD : TV); }

void Tv::set_remote_mode(Remote &r) {
  if (ison()) {
    r.mode_b = ((r.mode_b == Remote::Regular) ? r.Interactive : r.Regular);
  }
}

void Tv::settings() const {
  using std::cout;
  using std::endl;

  cout << "State: " << ((state == On) ? "Off" : "On") << endl;

  if (state) {
    cout << "Volume: " << volume << endl
         << "Channel: " << channel << endl
         << "Mode: " << ((mode == Antenna) ? "Cable" : "Antenna") << endl
         << "Input: " << ((input == TV) ? "DVD" : "TV") << endl;
  }

}  // display all settings

// Implement Remote methods
Remote::Remote(int m, int m_b) : mode(m), mode_b(m_b) {}
bool Remote::volup(Tv &t) { return t.volup(); }
bool Remote::voldown(Tv &t) { return t.voldown(); }
void Remote::onoff(Tv &t) { return t.onoff(); }
void Remote::chanup(Tv &t) { return t.chanup(); }
void Remote::chandown(Tv &t) { return t.chandown(); }
void Remote::set_chan(Tv &t, int c) { t.channel = c; }
void Remote::set_input(Tv &t) { t.set_input(); }

void Remote::show_mode() const {
  std::cout << "You current Remote mode: " << mode << std::endl;
  std::cout << "You current Remote mode_b: " << mode_b << std::endl;
}
