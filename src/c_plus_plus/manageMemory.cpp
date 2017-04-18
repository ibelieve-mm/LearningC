/**
 * Descriptions：内存的管理
 *  manageMemory
 * <p>
 * Author：ChenME
 * Date：2017/4/18
 * Email：ibelieve1210@163.com
 */

#include <iostream>

using namespace std;

int main() {

    // 申请一个整形内存
    int *p = new int;
    if (NULL == p) {
        return 0;
    }
    *p = 20;
    cout << *p << endl;
    delete p;//释放内存
    p = NULL;

    // 申请并初始化一个正向内存
    int *p1 = new int(30);
    if (NULL == p1) {
        return 0;
    }
    cout << *p1 << endl;
    delete p1;//释放内存
    p1 = NULL;

    //申请快内存
    int *p2 = new int[9];
    if (NULL == p2) {
        return 0;
    }
    p2[0] = 0;
    p2[1] = 1;
    p2[2] = 2;
    cout << p2[2] << endl;
    delete[]p2;//释放内存
    p2 = NULL;

    return 0;
}