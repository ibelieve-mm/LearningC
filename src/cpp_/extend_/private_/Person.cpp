//
// Created by admin on 2017/4/27.
//
#include <iostream>
#include "Person.h"

using namespace std;
using namespace extend_private;

Person::Person() {
    _strName = "Person";
    cout << "(extend_private :: Person) :: Person()" << endl;
}

void Person::play() {
    cout << "(extend_private :: Person) :: play() --> name:" + _strName << endl;
}