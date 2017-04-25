//
// Created by admin on 2017/4/25.
//
#include <iostream>
#include "Coordinate.h"

using namespace std;
using namespace const_function;

Coordinate::Coordinate(int x, int y) {
    _iX = x;
    _iY = y;
    cout << "(常成员函数) Coordinate():(" << _iX << "," << _iY << ")" << endl;
}

Coordinate::~Coordinate() {
    cout << "(常成员函数) ~Coordinate():(" << _iX << "," << _iY << ")" << endl;
}

void Coordinate::setX(int x) {
    _iX = x;
}

int Coordinate::getX() const {
    return _iX;
}

void Coordinate::setY(int y) {
    _iY = y;
}

int Coordinate::getY() const {
    return _iY;
}