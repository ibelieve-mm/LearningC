//
// Created by ChenME on 2017/4/23.
//

#include <iostream>
#include "Coordinate.h"

using namespace std;
using namespace class_member_pointer;

Coordinate::Coordinate(int x, int y) {
    _iX = x;
    _iY = y;
    cout << "(对象成员指针)Coordinate(int x, int y)  (" << _iX << "," << _iY << ")" << endl;
}

Coordinate::~Coordinate() {
    cout << "(对象成员指针)~Coordinate()  (" << _iX << "," << _iY << ")" << endl;
}

int Coordinate::getX() {
    return _iX;
}

int Coordinate::getY() {
    return _iY;
}