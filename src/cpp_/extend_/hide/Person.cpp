//
// Created by admin on 2017/4/27.
//
#include <iostream>
#include "Person.h"

using namespace std;
using namespace extend_hide;

Person::Person() {
    _strName = "Person";
    cout << "(extend_hide :: Person) :: Person()" << endl;
}

void Person::play() {
    cout << "(extend_hide :: Person) :: play() --> name:" + _strName << endl;
}

void Person::say() {
    cout << "(extend_hide :: Person) :: say() --> name:" + _strName << endl;
}