/**
 * Descriptions����������
 * <p>
 * Author��ChenME
 * Date��2017/4/19
 * Email��ibelieve1210@163.com
 */

#include <iostream>
#include "Coordinate.h"

using namespace std;

int main() {

    Coordinate coor[3];
    coor[0]._iX = 3;
    coor[0]._iY = 3;

    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << "coor[" << i << "]=(" << coor[i]._iX << "," << coor[i]._iY << ")" << endl;
    }

    cout << endl;

    Coordinate *p = new Coordinate[3];
    //�Ե�1��Ԫ�ظ�ֵ
    p->_iX = 101;
    p[0]._iY = 102;
    cout <<"��һ��ָ��ĵ�ַ��"<<p<<endl;

    //�Ե�2��Ԫ�ظ�ֵ
    p++;
    p->_iX = 103;
    p[0]._iY = 104;

    //�Ե�3��Ԫ�ظ�ֵ
    p[1]._iX = 105;
    p++;
    p->_iY = 106;

    cout <<endl;
    p -= 2;
    cout <<"��ʱָ�뿪ʼ�ĵ�ַ��"<<p<<endl;
    for (int i = 0; i < 3; i++) {
        cout << "p[" << i << "]=(" << p->_iX << "," << p->_iY << ")" << endl;
        p++;
    }
    cout <<endl;

    p-=3;
    cout <<"��ʱָ�뿪ʼ�ĵ�ַ��"<<p<<endl;
    delete []p;
    p = NULL;

    return 0;
}