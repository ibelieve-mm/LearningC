//
// Created by admin on 2017/4/27.
//

#include <iostream>
#include "Solider.h"

using namespace std;
using namespace extend_hide;

Solider::Solider() {
    cout << "(extend_hide :: Solider) :: Solider() " << endl;
}

void Solider::play() {
    cout << "(extend_hide :: Solider) :: play() --> name:" + _strName << endl;
}

void Solider::work() {
    _strName = "Solider";
    Person::_strName = "Solider from Person";
    cout << "(extend_hide :: Solider) :: work() --> name:" + _strName << endl;
    cout << "(extend_hide :: Solider) :: work() --> name:" + Person::_strName << endl;
}

void Solider::say(int age) {
    cout << "(extend_hide :: Solider) :: say() --> name:" + _strName + ", age" << age << endl;
}