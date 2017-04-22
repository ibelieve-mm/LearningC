//
// Created by ChenME on 2017/4/22.
//

#include <iostream>

#include "function/functionTest.h"
#include "c_test/cTest.h"
#include "bit_operation/bitOperation.h"
#include "link/linkStatic.h"
#include "link/linkDynamic.h"

using namespace std;

void reviewCInvoke() {

    // 函数的引用
//    funInvoke();

    // c代码示例
//    cTest();

    // 位运算
//    bitOperationInvoke();

    // 静态链表
    staticLinkInvoke();

    // 动态链表
    dynamicLinkInvoke();
}