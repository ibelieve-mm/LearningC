//
// Created by admin on 2017/4/25.
//
#include <iostream>
#include "Array.h"

using namespace std;
using namespace this_pointer;

Array::Array(int len) {
    this->len = len;
    cout << "(thisָ���ʹ��) Array(int len)" << endl;
}

Array::~Array() {
    cout << "(thisָ���ʹ��) ~Array()" << endl;
}


int Array::getLen() {
    return len;
}

//Array &Array::setLen(int len) {
//    this->len = len;
//    return *this;
//}
//
//Array &Array::printInfo() {
//    cout << "(thisָ���ʹ��) printInfo()" << endl;
//    cout << "the value of len is " << getLen() << endl;
//
//    return *this;
//}

Array *Array::setLen(int len) {
    this->len = len;
    return this;
}

Array *Array::printInfo() {
    cout << "(thisָ���ʹ��) printInfo()" << endl;
    cout << "the value of len is " << getLen() << endl;

    return this;
}