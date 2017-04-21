/**
 * Descriptions：主类
 * <p>
 * Author：ChenME
 * Date：2017/4/21
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include "src/cpp_/class_/create_class/createClass.h"
#include "src/cpp_/class_/define_out_class/in_same_file/defineOutClassInSameFile.h"
#include "src/cpp_/class_/define_out_class/in_diff_file/defineOutClassInDiffFile.h"
#include "src/cpp_/class_/class_array/classArray.h"
#include "src/cpp_/class_/class_member/classMember.h"
#include "src/cpp_/class_/deep_copy/deepCopy.h"
#include "src/cpp_/class_/class_pointer/classPointer.h"

using namespace std;

int main() {

    // 类的实例化
    createClassInvoke();

    // 类外定义(分文件)
//    defineOutClassInSameFileInvoke();

    // 类外定义(分文件)
//    defineOutClassInDiffFileInvoke();

    // 对象数组
//    classArrayInvoke();

    // 对象成员
//    classMemberInvoke();

    // 深copy
//    deepCopyInvoke();

    // 对象指针的使用
//    classPointerInvoke();

    return 0;
}