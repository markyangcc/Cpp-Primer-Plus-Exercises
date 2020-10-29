//
// Created by mark on 10/29/20.
//

#ifndef CPP_POKERPLAYER_H
#define CPP_POKERPLAYER_H

#include "Person.h"
#include <ctime>

class PokerPlayer : virtual public Person {

private:
    const int MIN_RANGE = 1;
    const int MAX_RANGE = 52;
public:
    int Draw();//return random num from 1-52
};

int PokerPlayer::Draw() {

    srand(time(NULL));
    return std::rand() % MAX_RANGE + MIN_RANGE;
}


#endif //CPP_POKERPLAYER_H
