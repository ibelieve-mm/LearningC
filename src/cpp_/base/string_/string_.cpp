/**
 * Descriptions：string的使用
 * <p>
 * Author：ChenME
 * Date：2017/4/18
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include <string>

using namespace std;

void initStringFun();

void useString();

void stringInvoke() {
//    initStringFun();
    useString();
}

/**
 * string的使用
 */
void useString() {

    string name;
    cout << "input your name:";
    getline(cin, name);
    if (name.empty()) {
        cout << "input is null..." << endl;
    } else {
        cout << "hello " + name << endl;
        if ("admin" == name) {
            cout << "you are a administrator." << endl;
        }
        cout << "your name length is : " << name.size() << endl;
        cout << "your name first letter is : " << name[0] << endl;
    }

}

/**
 * 初始化string
 */
void initStringFun() {

    string s1;          //s1位空字符串，即 ""
    string s2("abc");   //"abc"
    string s3(s2);      //"abc"
    string s4(4, 'a');  //"aaaa"
    string s5 = "hello";

    cout << "s1=" << s1 << "\ts2=" << s2 << "\ts3=" << s3 << "\ts4=" << s4 << endl;

    //判断字符串是否为空
    cout << "s1是否为空 : " << s1.empty() << endl;

    //判断字符串中字符的个数
    cout << "s4的长度是 : " << s4.size() << endl;

    //返回字符串中第n个字符（从0位置开始）
    cout << "s2的第2个字符是 : " << s2[2] << endl;

    //字符串连接
    cout << s2 + "," + s3 << endl;

    //判断是否相等
    cout << (s3 == s4) << endl;

    //判断是否不相等
    cout << (s3 != s4) << endl;
}