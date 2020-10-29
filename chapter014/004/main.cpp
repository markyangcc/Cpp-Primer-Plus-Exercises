//
// Created by mark on 10/29/20.
//

#include "Person.h"
#include "Gunslinger.h"
#include "PokerPlayer.h"
#include "BadDude.h"
#include <iostream>
#include <cstring>

const int SIZE = 5;


int main() {
    using std::cin;
    using std::cout;
    using std::endl;

    Person *cla[SIZE];

    int ct = 0;

    for (int ct = 0; ct < SIZE; ++ct) {

        char choice;

        cout << "Enter the gun category:" << endl
             << "p: Person        g: Gunslinger" << endl
             << "k: PokerPlayer   b: BadDude" << endl
             << "q: quit" << endl;

        cin >> choice;

        while (strchr("pgkb", choice) == nullptr) {
            cout << "Please enter p, g, k, b or q: ";
            cin >> choice;
        }

        if (choice == 'q')
            break;

        switch (choice) {
            case 'p':
                cla[ct] = new Person;

                break;
            case 'g':
                cla[ct] = new Gunslinger;
                break;
            case 'k':
                cla[ct] = new PokerPlayer;
                break;
            case 'b':
                cla[ct] = new BadDude;
                break;
        }


    }


    return 0;
}