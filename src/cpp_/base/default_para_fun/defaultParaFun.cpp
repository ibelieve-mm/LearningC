/**
 * Descriptions：函数参数默认值的使用
 * <p>
 * Author：ChenME
 * Date：2017/4/18
 * Email：ibelieve1210@163.com
 */

#include <iostream>

using namespace std;

void fun(int i, int j = 2, int k = 3);//声明函数
void fun(int i, int j, int k) {//定义函数
    cout << i << ",\t" << j << ",\t" << k << endl;
}

// 使用
void defaultParaFunInvoke() {
    fun(10);            //结果：10,     2,      3
    fun(10, 20);        //结果：10,     20,     3
    fun(10, 20, 30);    //结果：10,     20,     30
}