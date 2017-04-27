//
// Created by admin on 2017/4/27.
//
#include <iostream>
#include "Worker.h"

using namespace std;
using namespace extend_public;

void extendPublicTestInvoke() {


    Person person;
//    person._strName=""; //错误，无法访问 protected 成员
//    person._iAge=10; //错误，无法访问 private 成员
    person.eat();

    cout << "---------------------------------" << endl;

    Worker worker;
    worker.eat();
//    person._strName=""; //错误，无法访问 protected 成员
//    person._iAge=10; //错误，无法访问 private 成员
    worker._iSalary = 10;
    worker.work();
}