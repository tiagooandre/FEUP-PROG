//
// Created by Tiago André  on 08/06/2020.
//
#ifndef INC_3_PERSON_H
#define INC_3_PERSON_H

#include <string>
#include "Date.h"

using namespace std;

class Person {
public:
    Person();
    Person(string name, char gender, const Date &birthDate);
    const string getName();
    char getGender();
    const Date &getBirthDate();
    void setName(const string name);
    void setGender(char gender);
    void setBirthDate(const Date &birthDate);
    void showData();
private:
    string name;
    char gender{};
    Date birthDate;
};

#endif //INC_3_PERSON_H
