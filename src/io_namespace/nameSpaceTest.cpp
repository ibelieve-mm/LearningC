/**
 * Descriptions：命名空间的使用
 * <p>
 * Author：ChenME
 * Date：2017/4/9
 * Email：ibelieve1210@163.com
 */

#include <iostream>

using namespace std;
namespace A {
    int x = 1;

    void fun() {
        cout << "A：" << x << endl;
    }
}

namespace B {
    int x = 2;

    void fun() {
        cout << "B：" << x << endl;
    }

    void fun2() {
        cout << "I'm fun2 from." << endl;
    }
}

using namespace B;

int main() {
    A::fun();
    fun();
    fun2();
    return 0;
}

//
//练习
//namespace myNum {
//    int x = 105;
//}
//
//int main() {
//    // 使用bool类型定义isOdd，作为状态位
//    bool isFlag = false;
//
//    if (myNum::x % 2 == 0) {
//        //改变状态位的值，使其为false
//        isFlag = false;
//    } else {
//        //改变状态位的值，使其为true
//        isFlag = true;
//    }
//    // 判断状态位的值
//    if (isFlag) {
//        // 如果状态位的值为true，则打印变量x是奇数
//        cout << myNum::x << "是奇数。";
//    } else {
//        // 如果状态位的值为false，则打印变量x是偶数
//        cout << myNum::x << "是偶数。";
//
//    }
//    return 0;
//}