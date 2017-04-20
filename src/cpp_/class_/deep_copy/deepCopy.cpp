/**
 * Descriptions：深copy
 * <p>
 * Author：ChenME
 * Date：2017/4/20
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include "src/cpp_/class_/deep_copy/Array.h"


using namespace std;
using namespace deep_array;

int main() {
    Array arr1(5);
    cout << "arr1->count:" << arr1.getCount() << endl;
    arr1.printAddr();
    arr1.printArr();

    cout << endl;

    Array arr2 = arr1;
    cout << "arr2->count:" << arr2.getCount() << endl;
    arr2.printAddr();
    arr2.printArr();

    cout << endl;

    return 0;
}