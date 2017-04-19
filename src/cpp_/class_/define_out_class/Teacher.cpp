//
// Created by admin on 2017/4/18.
//

#include "Teacher.h"
#include <iostream>

using namespace std;

/**
 * 定义一个Teacher类，要求分别采用同文件类外定义和分文件类外定义方式完成
 *
 * 数据成员
 * 1. 姓名
 * 2. 年龄
 * 3. 性别
 *
 * 成员函数
 * 数据成员的封装
 * 授课teach
 */


/** *************************** 构造函数 ******************************* */

// 无参的构造函数
Teacher::Teacher() {
    str_name = "Teacher_default";
    i_age = 10;
    cout << "Teacher()" << endl;
}

// 使用常规方式对构造函数进行初始化
//Teacher::Teacher(string _name, int _age) {
//    str_name = _name;
//    i_age = _age;
//    cout << "Teacher(string _name, int _age)" << endl;
//}

// 使用初始化列表的方式对构造函数进行初始化
Teacher::Teacher(string _name, int _age) : str_name(_name), i_age(_age) {
    cout << "Teacher(string _name, int _age)--初始化列表" << endl;
}


// copy构造函数（如果不写，系统自动创建一个默认的copy构造函数）
Teacher::Teacher(const Teacher &t) {
    cout << "Teacher(const Teacher &t)" << endl;
}


/** *************************** 析构函数(对象销毁钱调用) ******************************* */
Teacher::~Teacher() {
    cout << "~Teacher()" << endl;
}

/** *************************** 其他函数 ******************************* */

void Teacher::setName(string _name) {
    str_name = _name;
}

string Teacher::getName() {
    return str_name;
}

void Teacher::setGender(string _gender) {
    str_gender = _gender;
}

string Teacher::getGender() {
    return str_gender;
}

void Teacher::setAge(int _age) {
    i_age = _age;
}

int Teacher::getAge() {
    return i_age;
}

void Teacher::teach() {
    cout << "In diff class, and class begin!" << endl;
}