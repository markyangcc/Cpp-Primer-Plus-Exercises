
#ifndef CPP_PERSON_H
#define CPP_PERSON_H

#include <string>
#include <iostream>

using std::string;

class Person {
protected:
    string firstname;
    string lastname;

public:
    Person();

    ~Person();

    virtual void Show() const;
};



Person::Person() {
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter first name: ";
    cin >> firstname;
    cout << "Enter last name: ";
    cin >> lastname;
}

Person::~Person() = default;

void Person::Show() const {
    using std::cout;
    using std::endl;

    cout << "First Name: " << firstname << endl;
    cout << "Last Name: " << lastname << endl;
}

#endif //CPP_PERSON_H
