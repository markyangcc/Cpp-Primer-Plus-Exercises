
#ifndef CPP_POKERPLAYER_H
#define CPP_POKERPLAYER_H

#include "Person.h"
#include <ctime>
#include <random>

class PokerPlayer : virtual public Person {

private:
    const int MIN_RANGE = 1;
    const int MAX_RANGE = 52;
public:
    int Draw() const;//return random num from 1-52

};


int PokerPlayer::Draw() const {

    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(MIN_RANGE, MAX_RANGE); // distribution in range [1, 6]

    return dist(rng);
}


#endif //CPP_POKERPLAYER_H
