//
// Created by admin on 2017/4/19.
//

#ifndef LEARNINGC_LINE_H
#define LEARNINGC_LINE_H

#endif //LEARNINGC_LINE_H

#include "Coordinate.h"

using namespace class_member;

class Line {
public :
    Line(int x1, int y1, int x2, int y2);

    ~Line();

    void setA(int x, int y);

    void setB(int x, int y);

    void printInfo();

private :
    Coordinate _coorA;
    Coordinate _coorB;
};