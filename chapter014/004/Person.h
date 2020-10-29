
#ifndef CPP_PERSON_H
#define CPP_PERSON_H

#include <string>
#include <iostream>

using std::string;

class Person {
private:
    string firstname;
    string lastname;

public:
    Person();

    Person(const Person &pe);

    ~Person();

    void Show() const;

    //TODO: overloading operate=()
};

Person::Person() {}

Person::Person(const Person &pe) {
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter first name: ";
    cin >> firstname;
    cout << "Enter last name: ";
    cin >> lastname;
}

Person::~Person() {}

void Person::Show() const {
    using std::cout;
    using std::endl;

    cout << "First Name: " << firstname << endl;
    cout << "Last Name: " << lastname << endl;
}

#endif //CPP_PERSON_H
