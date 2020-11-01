
#ifndef TV_H_
#define TV_H_

class Remote;
class Tv {
 private:
  int state;//on or off
  int volume;
  int maxchannel;
  int channel;//current channel setting
  int mode;//broadcast or cable
  int input;//Tv or Dvd

 public:
  friend class Remote;//Remote can access private parts

  enum { Off, On };
  enum { Minval, Maxval = 20 };
  enum { Antenna, Cable };
  enum { Tv, Dvd };

  Tv(int s = Off, int mc = 125);
  void onoff();
  bool ison() const;
  bool volup();
  bool voldown();
  void chanup();
  void chandown();

  void set_mode();
  void set_input();

  void set_remote_mode() {};
  void settings() const;//display all settings

};

class Remote {
 private:
  int mode;//regular or interactive mode
 public:
  friend class Tv;

  enum { Regular, Interactive };//Remote mode

  Remote(int m = Tv);
  bool volup(Tv &t);
  bool voldown(Tv &t);
  void onoff(Tv &t);
  void chanup(Tv &t);
  void chandown(Tv &t);
  void set_chan(Tv &t, int c);
  void set_input(Tv &t);

  void show_mode() const;

};

#endif //TV_H_
