//
// Created by admin on 2017/4/25.
//
namespace const_function {
    class Coordinate {
    public:

        Coordinate(int x, int y);

        ~Coordinate();

        void setX(int x);

        int getX() const;

        void setY(int y);

        int getY() const;

    private:
        int _iX;
        int _iY;
    };
}