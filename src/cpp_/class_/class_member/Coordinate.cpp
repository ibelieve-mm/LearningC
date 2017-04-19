//
// Created by admin on 2017/4/19.
//
#include <iostream>
#include "Coordinate.h"

using namespace std;
using namespace class_member;

Coordinate::Coordinate(int x, int y) {
    _iX = x;
    _iY = y;
    cout << "Coordinate():(" << _iX << "," << _iY << ")" << endl;
}

Coordinate::~Coordinate() {
    cout << "~Coordinate():(" << _iX << "," << _iY << ")" << endl;
}

void Coordinate::setX(int x) {
    _iX = x;
}

int Coordinate::getX() {
    return _iX;
}

void Coordinate::setY(int y) {
    _iY = y;
}

int Coordinate::getY() {
    return _iY;
}