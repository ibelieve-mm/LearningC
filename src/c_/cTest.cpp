/**
 * Descriptions：c语言复习
 * <p>
 * Author：ChenME
 * Date：2017/4/16
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include <stdio.h>

#include "function/functionTest.h"

using namespace std;

/** ***************************************************************************************************************** */
/** ***************************************************************************************************************** */
/** ***************************************************************************************************************** */

#define N(n) n*10;
#define ADD(a, b) (a+b)

/**
 * 利用递归算法计算n的阶乘
 * @param n
 * @return
 */
int factorial(int n) {
    int result;
    if (n < 0) {
        cout << "输入错误！" << endl;
        return 0;
    } else if (1 == n || 0 == n) {
        return 1;
    } else {
        result = n * factorial(n - 1);
    }
    return result;
}

/**
 * 猴子第一天摘下N个桃子，当时就吃了一半，还不过瘾，就又多吃了一个。
 * 第二天又将剩下的桃子吃掉一半，又多吃了一个。以后每天都吃前一天剩下的一半零一个。
 * 到第10天在想吃的时候就剩一个桃子了.
 * 问第一天共摘下来多少个桃子？并反向打印每天所剩桃子数。
 * @param num
 * @return
 */
int getPeachNumber(int num) {
    int leftNum;//所剩的桃子数量
    if (11 == num) {
        return 1;
    } else {
        leftNum = 2 * (getPeachNumber(num + 1) + 1);
        cout << "第 " << num << " 天所剩余的桃子是：" << leftNum << endl;
    }
    return leftNum;
}

/**
 * 求和函数
 * @param a
 * @param b
 * @return
 */
int addFun(int a, int b) {
    return a + b;
}

/** ***************************************************************************************************************** */
/** ***************************************************************************************************************** */
/** ***************************************************************************************************************** */

void printMultiplicationTable();//打印九九乘法表
void printPrimeNumber();//输出2-100之间的素数
void recursion();//递归调用的展示
void defineTest();//宏定义测试

void cTest() {
//    printMultiplicationTable();
//    printPrimeNumber();
//    recursion();
//    defineTest();
}

/**
 * 宏定义测试
 */
void defineTest() {

    int a = 10;
    int b = N(10);
    cout << "\n宏定义测试：\nb的值为：" << b << endl;
    cout << a << "+" << b << "=" << addFun(a, b) << endl;

    int result = ADD(a, b);
    cout << "使用宏函数计算" << a << "+" << b << "=" << result << endl;

    int result2 = ADD(a, b) * ADD(a, b);
    // 此处预编译之后的结果为：
    // int result2 = (10 + 100) * (10 + 100);
    //
    // 假设宏函数写成 #define ADD(a, b) a+b
    // 则编译后的结果为：
    // int result2 = 10 + 100 * 10 + 100;//结果就错了，没有达到想要的结果

    cout << "result2的结果是：" << result << "*" << result << "=" << result2 << endl;
}

/**
 * 递归调用的展示
 */
void recursion() {
    int n = 5;
    cout << "计算出" << n << "的阶乘：" << factorial(5) << "\n" << endl;

    cout << "猴子第一天摘了 " << getPeachNumber(1) << " 个桃子。" << endl;
}

/**
 * 输出2-100之间的素数
 */
void printPrimeNumber() {
    int m, n, min = 2, max = 100;
    cout << "\n" << min << "到" << max << "之间的素数有：" << endl;
    for (m = min; m <= 100; m++) {
        for (n = 2; n < m; n++) {
            if (m % n == 0)       //什么条件下跳出当前循环
                break;         //这里应该退出当前循环了
        }
        if (m == n) {  //n循环结束后，如果m=n的话就输出m
            cout << m << "\t";
        }
    }
    cout << "\n" << endl;
}

/**
 * 输出九九乘法表
 */
void printMultiplicationTable() {
    cout << "\n" << "输出九九乘法表：" << endl;
    for (int i = 9; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
}