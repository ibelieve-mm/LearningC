//
// Created by admin on 2017/4/27.
//
#include <iostream>
#include "Person.h"

using namespace std;
using namespace extend_public;

Person::Person() {
    cout << "(extend_public) Person()" << endl;
}

Person::~Person() {
    cout << "(extend_public) ~Person()" << endl;
}

void Person::eat() {
    _strName = "Person";
    _iAge = 0;
    cout << "(extend_public) eat()" << endl;
}