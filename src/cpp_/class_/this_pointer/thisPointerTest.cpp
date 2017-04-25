/**
 * Descriptions：this指针的使用
 * <p>
 * Author：ChenME
 * Date：2017/4/25
 * Email：ibelieve1210@163.com
 */
#include <iostream>
#include "thisPointerTest.h"
#include "Array.h"

using namespace std;
using namespace this_pointer;

void thisPointerInvoke() {
    Array arr1(10);

//    arr1.printInfo().setLen(5).printInfo();
    arr1.printInfo()->setLen(5)->printInfo();
}