//
// Created by ChenME on 2017/4/23.
//

#include <iostream>
#include "Line.h"

using namespace std;
using namespace class_member_pointer;

Line::Line(int x1, int y1, int x2, int y2) {

    _pCoorA = new Coordinate(x1, y1);
    _pCoorB = new Coordinate(x2, y2);

    cout << "(对象成员指针)Line(int x1, int y1, int x2, int y2)" << endl;
}

Line::~Line() {

    delete _pCoorA;
    _pCoorA = NULL;
    delete _pCoorB;
    _pCoorB = NULL;

    cout << "(对象成员指针)~Line()" << endl;
}

void Line::printInfo() {
    cout << "(对象成员指针)~printInfo()" << endl;
    cout << "((" << _pCoorA->getX() << "," << _pCoorA->getY() << "), ("
         << _pCoorB->getX() << "," << _pCoorB->getY() << "))" << endl;
}