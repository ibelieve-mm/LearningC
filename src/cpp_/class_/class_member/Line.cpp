//
// Created by admin on 2017/4/19.
//
#include "Line.h"
#include <iostream>

using namespace std;

Line::Line(int x1, int y1, int x2, int y2) : _coorA(x1, y1), _coorB(x2, y2) {
    cout << "Line()" << endl;
}

Line::~Line() {
    cout << "~Line()" << endl;
}

void Line::setA(int x, int y) {
    _coorA.setX(x);
    _coorA.setY(y);
}

void Line::setB(int x, int y) {
    _coorB.setX(x);
    _coorB.setY(y);
}

void Line::printInfo() {
    cout << "((" << _coorA.getX() << "," << _coorA.getY() << "),("
         << _coorB.getX() << "," << _coorB.getY() << "))" << endl;
}