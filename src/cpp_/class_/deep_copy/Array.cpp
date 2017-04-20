//
// Created by ChenME on 2017/4/20.
//
#include <iostream>
#include "Array.h"

using namespace deep_array;
using namespace std;

Array::Array(int count) {
    _iCount = count;
    _pArr = new int[_iCount];
    for (int i = 0; i < _iCount; i++) {
        _pArr[i] = i;
    }
    cout << "Array()" << endl;
}

Array::Array(const Array &arr) {
    _iCount = arr._iCount;

    // 浅copy
//    _pArr = arr._pArr;

    // 深copy
    _pArr = new int[_iCount];
    for (int i = 0; i < _iCount; i++) {
        _pArr[i] = arr._pArr[i];
    }

    cout << "Array(const Array &arr)" << endl;
}

Array::~Array() {
    delete _pArr;
    _pArr = NULL;
    cout << "~Array()" << endl;
}

void Array::setCount(int count) {
    _iCount = count;
}

int Array::getCount() {
    return _iCount;
}

void Array::printAddr() {
    cout << "_pArr的值是： " << _pArr << endl;
}

void Array::printArr() {
    for (int i = 0; i < _iCount; i++) {
        cout << "index " << i << " is : " << _pArr[i] << endl;
    }
}

