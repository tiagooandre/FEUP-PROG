//
// Created by Tiago André  on 08/06/2020.
//

#include <iostream>
#include "Person.h"
#include "Date.h"

using namespace std;

Person::Person() = default;

Person::Person(string name, char gender, const Date &birthDate) {
    this->name = name;
    this->gender = gender;
    this->birthDate = birthDate;
}

void Person::setName(const string name) {
    this->name = name;
}

void Person::setGender(char gender) {
    this->gender = gender;
}

void Person::setBirthDate(const Date &birthDate) {
    this->birthDate = birthDate;
}

const string Person::getName() {
    return name;
}

const Date &Person::getBirthDate() {
    return birthDate;
}

void Person::showData() {
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    cout << "Birthday: "; birthDate.show();
}