/**
 * Descriptions：对象指针
 * <p>
 * Author：ChenME
 * Date：2017/4/21
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include "src/cpp_/class_/class_pointer/Coordinate.h"


void createClassFromHeap();

void createClassFromStack();

using namespace std;
using namespace class_pointer;

int main() {

    // 从堆中实例化对象
//    createClassFromHeap();


    // 从栈实例化对象
    createClassFromStack();

    return 0;
}

/**
 * 从栈实例化对象
 */
void createClassFromStack() {
    Coordinate p1;
    Coordinate *p2 = &p1;
    p2->_iX = 10;
    (*p2)._iY = 20;

    cout << "(" << p1._iX << "," << p2->_iY << ")" << endl;

    delete p2;
    p2 = NULL;
}

/**
 * 从堆中实例化对象
 */
void createClassFromHeap() {
    Coordinate *p1 = NULL;
    p1 = new Coordinate; //    p1 = new Coordinate();
    p1->_iX = 10;
    p1->_iY = 20;

    Coordinate *p2 = new Coordinate; //    Coordinate *p2 = new Coordinate;
    (*p2)._iX = 30;
    (*p2)._iY = 40;

    cout << endl;

    cout << (*p1)._iX + p2->_iX << endl;
    cout << p1->_iY + (*p2)._iY << endl;

    cout << endl;

    delete p1;
    p1 = NULL;

    delete p2;
    p2 = NULL;
}