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

    int ct;

    for (ct = 0; ct < SIZE; ++ct) {

        char choice;

        cout << "Enter the gun category:" << endl
             << "p: Person        g: Gunslinger" << endl
             << "k: PokerPlayer   b: BadDude" << endl
             << "q: quit" << endl;

        cin >> choice;

        while (strchr("pgkbq", choice) == nullptr) {
            cout << "Please enter p, g, k, b or q: ";
            cin >> choice;
        }

        if (choice == 'q') {
            cout << "You have reach here." << endl;
            break;
        }


        switch (choice) {
            case 'p':
                cla[ct] = new Person;
                cout << endl;
                cla[ct]->Show();
                break;
            case 'g':
                cla[ct] = new Gunslinger;
                cout << endl;
                cla[ct]->Show();
                break;
            case 'k': {// if get errors like "Cannot jump from switch statement to this case label",
                // add brackets to make it be a whole unit
                auto *pok_person = new PokerPlayer;
                cout << endl;
                cout << "Return a card: " << pok_person->Draw() << endl;
                cla[ct] = pok_person;//string will perform a deep copy, don't worry about that
                cla[ct]->Show();//follow the exercise, use Person::Show()
                break;
            }
            case 'b': {
                auto *bad_person = new BadDude;
                cout << endl;
                cout << "Return a card: " << bad_person->Cdraw() << endl
                     << "Bad Guy draw gun time: " << bad_person->GDraw() << endl;
                cla[ct]->Show();
                break;
            }
            default:
                break;
        }
    }

    return 0;
}