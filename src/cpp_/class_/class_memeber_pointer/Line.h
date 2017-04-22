//
// Created by ChenME on 2017/4/23.
//

#include "Coordinate.h"

using namespace class_member_pointer;

namespace class_member_pointer {
    class Line {
    public:
        Line(int x1, int y1, int x2, int y2);

        ~Line();

        void printInfo();

    private:
        Coordinate *_pCoorA;
        Coordinate *_pCoorB;
    };
}