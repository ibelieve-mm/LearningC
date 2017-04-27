//
// Created by admin on 2017/4/27.
//
#include <iostream>
#include "Person.h"

using namespace std;
using namespace extend_public;

Person::Person() {
    cout << "(extend_base) Person()" << endl;
}

Person::~Person() {
    cout << "(extend_base) ~Person()" << endl;
}

void Person::eat() {
    _strName = "ChenME";
    _iAge = 20;
    cout << "(extend_base) eat()" << endl;
}