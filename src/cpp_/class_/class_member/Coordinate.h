//
// Created by admin on 2017/4/19.
//

#ifndef LEARNINGC_COORDINATE_H
#define LEARNINGC_COORDINATE_H

#endif //LEARNINGC_COORDINATE_H

namespace class_member {
    class Coordinate {
    public:

        Coordinate(int x, int y);

        ~Coordinate();

        void setX(int x);

        int getX();

        void setY(int y);

        int getY();

    private:
        int _iX;
        int _iY;
    };
}