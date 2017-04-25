//
// Created by admin on 2017/4/25.
//

#include "Coordinate.h"

using namespace const_function;
namespace const_function {
    class Line {
    public :
        Line(int x1, int y1, int x2, int y2);

        ~Line();

        void setA(int x, int y);

        void setB(int x, int y);

        void printInfo() const;

        void printInfo();

    private :
        const Coordinate _coorA;
        Coordinate _coorB;
    };
}