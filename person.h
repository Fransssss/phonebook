//
// Created by Carlos R. Arias on 5/11/22.
//

#ifndef PHONEBOOK_PERSON_H
#define PHONEBOOK_PERSON_H

#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::istream;

class Person {
private:
    char* _name;
    char _phone[11];
    int _level;
public:
    Person(const char* name, const char* phone, int level = 0);
    Person(const Person& person);
    const Person& operator=(const Person& rhs);
    ~Person();
    string ToString()const;
    string ToJSON()const;
    string GetName()const;
    string GetPhone()const;
    int GetLevel()const;
    bool Equals(const Person& person)const;
    istream& Read(istream& input);
    ostream& Write(ostream& output)const;
};
/*
 * constructor(name, phone, level)
 * copy constructor
 * const copy assignment operator
 * destructo
 * tostring
 * tojosn
 * getname
 * getphone
 * getlevel
 * bool equal (class)
 * istream read
 * ostream write
 */

#endif //PHONEBOOK_PERSON_H
