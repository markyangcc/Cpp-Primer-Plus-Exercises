
#ifndef CPP_GUNSLINGER_H
#define CPP_GUNSLINGER_H

#include "Person.h"

class Gunslinger : virtual public Person {

private:
    int notch{};//notches num on gun
    double draw_time{};
public:
    Gunslinger();

    double Draw() const;//return draw gun time


    void Show() const override;
};


Gunslinger::Gunslinger() {
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter the guy's drawing gun time: ";
    cin >> draw_time;
}

double Gunslinger::Draw() const {
    return draw_time;
}


void Gunslinger::Show() const {
    using std::cout;
    using std::endl;

    Person::Show();

    cout << "Scans on gun: " << notch << endl;
    cout << "Gun draw time: " << Draw() << endl;
}


#endif //CPP_GUNSLINGER_H
