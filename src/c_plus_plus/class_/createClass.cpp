/**
 * Descriptions：类的实例化
 * <p>
 * Author：ChenME
 * Date：2017/4/18
 * Email：ibelieve1210@163.com
 */

#include <iostream>

using namespace std;

class Coordinate {
public :
    int x;
    int y;

    void printX() {
        cout << x << endl;
    }

    void printY() {
        cout << y << endl;
    }
};

int main() {

    //在栈中实例化一个对象
    Coordinate coor;
    coor.x = 10;
    coor.y = 20;
    coor.printX();
    coor.printY();

    //在堆中实例化一个对象
    Coordinate *p = new Coordinate();
    if (NULL == p) {
        //申请内存失败
        return 0;
    }
    p->x = 100;
    p->y = 200;
    p->printX();
    p->printY();
    delete p;
    p = NULL;

    return 0;
}