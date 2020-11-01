//
// Created by mark on 11/1/20.
//

#include "Tv.h"
#include <iostream>

Tv::Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(Tv) {}
void Tv::onoff() { state = (state == On) ? Off : On; }
bool Tv::ison() const { return state == On }
bool Tv::volup();
bool Tv::voldown();
void Tv::chanup();
void Tv::chandown();

void Tv::set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
void Tv::set_input() { input = (input == Tv) ? Dvd : Tv; }

void Tv::set_remote_mode() {

  if (ison())
	Remote::mode = (Remote::mode == Remote::Regular) ? Remote::Interactive : Remote::Regular;
};
void Tv::settings() const;//display all settings


//Implement Remote methods

Remote::Remote(int m = Tv) : mode(m) {}
bool Remote::volup(Tv &t) { return t.volup(); }
bool Remote::voldown(Tv &t) { return t.voldown(); }
void Remote::onoff(Tv &t) { return t.onoff(); }
void Remote::chanup(Tv &t) { return t.chanup(); }
void Remote::chandown(Tv &t) { return t.chandown(); }
void Remote::set_chan(Tv &t, int c) { t.channel = c; }
void Remote::set_input(Tv &t) { t.set_input(); }

void Remote::show_mode() const {
  std::cout << "You current Remote mode: " << Remote::mode << std::endl;
}