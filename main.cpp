/**
 * Descriptions：位运算
 * <p>
 * Author：ChenME
 * Date：2017/4/16
 * Email：ibelieve1210@163.com
 */

/**
 * & 按位与
 * | 按位或
 * ^ 按位异或
 * ~ 按位取反
 * << 左移
 * >> 右移
 */

#include <iostream>

void andBitOperation();

void orBitOperation();

void xorBitOperation();

void leftMove();

using namespace std;


int main() {

    //与运算
    andBitOperation();

    // 按位或
    orBitOperation();

    // 按位异或
    xorBitOperation();

    //左移运算
    leftMove();


    return 0;
}

void leftMove() {//规则，高位丢弃，低位补0

    cout << "\n左移运算：" << endl;

    // 1. 将一个数扩大2的n次方倍
    int a = 3;  //00000000 00000000 00000000 00000011
    cout << "a左移前：" << a << endl;
    a = a << 4; //00000000 00000000 00000000 00110000
    cout << "a左移4位后：" << a << endl;
}

void xorBitOperation() {

    cout << "\n按位异或运算：" << endl;

    int a = 9;      //00000000 00000000 00000000 00001001
    int b = 5;      //00000000 00000000 00000000 00000101
    int c = a ^b;   //00000000 00000000 00000000 00001100
    cout << a << " ^ " << b << " 的结果是：" << c << endl;

    // 1. 定位翻转
    cout << (a ^ 0xFF) << endl;

    // 2. 数值交换
    cout << "数值交换前：a=" << a << ", b=" << b << endl;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << "数值交换后：a=" << a << ", b=" << b << endl;
}

void orBitOperation() {

    cout << "\n按位或运算：" << endl;

    int a = 9;      //00000000 00000000 00000000 00001001
    int b = 5;      //00000000 00000000 00000000 00000101
    int c = a | b;  //00000000 00000000 00000000 00001101
    cout << a << " | " << b << " 的结果是：" << c << endl;

    // 1. 设置一个数的指定位
    cout << (a | 0xFF) << endl;
}

void andBitOperation() {

    cout << "\n按位与运算：" << endl;

    int a = 4;      //00000000 00000000 00000000 00000100
    int b = 7;      //00000000 00000000 00000000 00000111
    int c = a & b;  //00000000 00000000 00000000 00000100
    cout << a << " & " << b << " 的结果是：" << c << endl;

    // 1. 迅速清零
    cout << (a & 0) << endl;

    // 2. 保留数据的指定位
    cout << (b & 2) << endl;

    // 3. 判断奇偶性（让一个数&1，如果结果为1，该数为奇数；结果为0，则该数为偶数）
    cout << (b & 1) << endl;
}