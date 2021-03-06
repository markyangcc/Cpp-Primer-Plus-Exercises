
#ifndef CPP_BADDUDE_H
#define CPP_BADDUDE_H

#include "Gunslinger.h"
#include "PokerPlayer.h"

class BadDude : public Gunslinger, public PokerPlayer {

private:
    double draw_time{};

public:


    double GDraw() const;

    int Cdraw() const { return PokerPlayer::Draw(); }


    void Show() const override;
};


double BadDude::GDraw() const {
    return draw_time;
}


void BadDude::Show() const {
    using std::cout;
    using std::endl;

    Gunslinger::Show();

    cout << "Bad gun draw gun time: " << GDraw() << endl;
    cout << "Bad gun card number: " << Cdraw() << endl;
}


#endif //CPP_BADDUDE_H
