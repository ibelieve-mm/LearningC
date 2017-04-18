//
// Created by admin on 2017/4/18.
//

//#ifndef LEARNINGC_TEACHER_H
//#define LEARNINGC_TEACHER_H
//
//#endif //LEARNINGC_TEACHER_H

#include <string>

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
class Teacher {
public:

    void setName(string _name);

    string getName();

    void setGender(string _gender);

    string getGender();

    void setAge(int _age);

    int getAge();

    void teach();

private:
    string str_name;
    string str_gender;
    int i_age;
};