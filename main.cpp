/**
 * Descriptions：主类
 * <p>
 * Author：ChenME
 * Date：2017/4/21
 * Email：ibelieve1210@163.com
 */

#include <iostream>

#include "src/c_/function/functionTest.h"
#include "src/cpp_/base/memory_manage/manageMemory.h"
#include "src/cpp_/base/default_para_fun/defaultParaFun.h"
#include "src/cpp_/base/const_/const_.h"
#include "src/cpp_/base/io_namespace/ioNamespace.h"
#include "src/cpp_/base/quote_/quote_.h"
#include "src/cpp_/base/string_/string_.h"
#include "src/cpp_/class_/create_class/createClass.h"
#include "src/cpp_/class_/data_pack/dataPack.h"
#include "src/cpp_/class_/define_out_class/in_same_file/defineOutClassInSameFile.h"
#include "src/cpp_/class_/define_out_class/in_diff_file/defineOutClassInDiffFile.h"
#include "src/cpp_/class_/class_array/classArray.h"
#include "src/cpp_/class_/class_member/classMember.h"
#include "src/cpp_/class_/deep_copy/deepCopy.h"
#include "src/cpp_/class_/class_pointer/classPointer.h"
#include "src/c_/reviewCAll.h"

using namespace std;

int main() {

    // C语言回顾
    reviewCInvoke();

    // 内存的管理
//    memoryManageInvoke();

    // 函数参数默认值的使用
//    defaultParaFunInvoke();

    // const关键字的使用
//    constInvoke();

    // io以及namespace的使用
//    ioNamespaceInvoke();

    // c++中引用的使用
//    quoteInvoke();

    // 字符串的使用
//    stringInvoke();

    // 类的实例化
//    createClassInvoke();

    // 数据的封装
//    dataPackInvoke();

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