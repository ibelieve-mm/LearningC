//
// Created by ChenME on 2017/4/23.
//

#ifndef LEARNINGC_COORDINATE_H
#define LEARNINGC_COORDINATE_H

#endif //LEARNINGC_COORDINATE_H
namespace class_member_pointer {
    class Coordinate {
    public:

        Coordinate(int x, int y);

        ~Coordinate();

        int getX();

        int getY();

    private:
        int _iX;
        int _iY;
    };
}