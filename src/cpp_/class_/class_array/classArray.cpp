/**
 * Descriptions：对象数组
 * <p>
 * Author：ChenME
 * Date：2017/4/19
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include "Coordinate.h"

using namespace std;
using namespace class_array;

void classArray() {

    Coordinate coor[3];
    coor[0]._iX = 3;
    coor[0]._iY = 3;

    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << "coor[" << i << "]=(" << coor[i]._iX << "," << coor[i]._iY << ")" << endl;
    }

    cout << endl;

    Coordinate *p = new Coordinate[3];
    //对第1个元素赋值
    p->_iX = 101;
    p[0]._iY = 102;
    cout <<"第一个指针的地址："<<p<<endl;

    //对第2个元素赋值
    p++;
    p->_iX = 103;
    p[0]._iY = 104;

    //对第3个元素赋值
    p[1]._iX = 105;
    p++;
    p->_iY = 106;

    cout <<endl;
    p -= 2;
    cout <<"此时指针开始的地址："<<p<<endl;
    for (int i = 0; i < 3; i++) {
        cout << "p[" << i << "]=(" << p->_iX << "," << p->_iY << ")" << endl;
        p++;
    }
    cout <<endl;

    p-=3;
    cout <<"此时指针开始的地址："<<p<<endl;
    delete []p;
    p = NULL;
}