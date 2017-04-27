//
// Created by admin on 2017/4/27.
//
#include <iostream>
#include "Solider.h"

using namespace std;
using namespace extend_hide;

void extendHideInvoke() {
    Solider solider;

    cout << "--------------------------------------------------------------------" << endl;
    solider.work();

    cout << "--------------------------------------------------------------------" << endl;
    solider.play();
    solider.Person::play();

    cout << "--------------------------------------------------------------------" << endl;
    solider.say(10);
//    solider.say();// 错误，无法调用
}