/**
 * Descriptions：c++中引用的用法
 * <p>
 * Author：ChenME
 * Date：2017/4/16
 * Email：ibelieve1210@163.com
 */

#include <iostream>

using namespace std;

/** *************************************************************************************************************** */
/** *************************************************************************************************************** */



/**
 * 交换函数1
 * @param a
 * @param b
 */
void exchangeFun1(int *a, int *b) {
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

/**
 * 交换函数2
 * @param a
 * @param b
 */
void exchangeFun2(int &a, int &b) {
    int c = 0;
    c = a;
    a = b;
    b = c;
}

/** *************************************************************************************************************** */
/** *************************************************************************************************************** */

/**
 * 结构体Coor
 */
typedef struct {
    int x;
    int y;
} Coor;

void yinyongDemo();

void quoteInvoke() {
    yinyongDemo();
}

/**
 * c++的引用类型用法
 */
void yinyongDemo() {

    /**
     * 基本数据类型的引用（注：引用必须初始化）
     */
    int var0 = 3;
    int &b = var0;
    b = 10;
    cout << "基本数据类型的引用 - a的值为：" << var0 << endl;


    /**
     * 结构体的引用
     */
    Coor mCoor;
    Coor &c = mCoor;
    c.x = 20;
    c.y = 10;
    cout << "结构体的引用 - 坐标为：(" << mCoor.x << "," << mCoor.y << ")" << endl;

    /**
     * 指针类型的引用
     * 类型 *&指针引用名 = 指针;
     */
    int var1 = 10;
    int *p = &var1;
    int *&q = p;
    *q = 20;
    cout << "指针类型的引用 - " << var1 << endl;

    /**
     * 引用在函数参数的使用
     */
    int var2 = 10;
    int var3 = 20;
//    exchangeFun1(&var2, &var3);
    exchangeFun2(var2, var3);
    cout << "引用在函数参数的使用 - exchangeFun(10,20)=" << var2 << "," << var3 << endl;
}