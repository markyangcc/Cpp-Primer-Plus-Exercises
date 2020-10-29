//
// Created by mark on 10/29/20.
//

#ifndef CPP_GUNSLINGER_H
#define CPP_GUNSLINGER_H

#include "Person.h"

class Gunslinger : virtual public Person {

private:
    int notch;//notches num on gun
    double draw_time;
public:
    double Draw() const;//return draw gun time

    void set_draw();

    void Show() const;
};

double Gunslinger::Draw() const {
    return draw_time;
}

void Gunslinger::set_draw() {
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter the bad guy draw gun time: ";
    cin >> draw_time;
}

void Gunslinger::Show() const {
    using std::cout;
    using std::endl;

    Person::Show();

    cout << "Scans on gun: " << notch << endl;
    cout << "Gun draw time: " << Draw() << endl;
}

#endif //CPP_GUNSLINGER_H
