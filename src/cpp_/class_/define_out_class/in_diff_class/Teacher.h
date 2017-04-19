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

    /** *************************** 构造函数 ******************************* */

    // 无参的构造函数
    Teacher();

    // 有参（并且带有默认值）的构造函数
    Teacher(string name, int age = 100);

    //copy构造函数（以下两种写法效果一样）（如果不写，系统自动创建一个默认的copy构造函数）
//    Teacher(const Teacher &t);
    Teacher(const Teacher &);


    /** *************************** 析构函数(对象销毁钱调用) ******************************* */

    ~Teacher();

    /** *************************** 其他函数 ******************************* */

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