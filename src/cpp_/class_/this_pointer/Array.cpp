//
// Created by admin on 2017/4/25.
//
#include <iostream>
#include "Array.h"

using namespace std;
using namespace this_pointer;

Array::Array(int len) {
    this->len = len;
    cout << "(this指针的使用) Array(int len)" << endl;
}

Array::~Array() {
    cout << "(this指针的使用) ~Array()" << endl;
}

Array& Array::setLen(int len) {
    this->len = len;
}

int Array::getLen() {
    return len;
}

Array& Array::printInfo() {
    cout << "(this指针的使用) printInfo()" << endl;
    cout << "the value of len is " << getLen() << endl;

    return *this;
}