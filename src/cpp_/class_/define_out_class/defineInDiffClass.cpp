/**
 * Descriptions：类外定义(分文件)
 * <p>
 * Author：ChenME
 * Date：2017/4/18
 * Email：ibelieve1210@163.com
 */

#include <iostream>
#include "src/cpp_/class_/define_out_class/Teacher.h"

using namespace std;

int main() {

    Teacher t;//调用无参的构造函数
    t.setName("Jim");
    t.setGender("M");
    t.setAge(30);

    cout << "name:" + t.getName() + ", gender:" + t.getGender() + ", age:" << t.getAge() << endl;
    t.teach();

    cout << endl;
    Teacher t2("Merry", 21);//调用有参的构造函数
    cout << "name:" + t2.getName() + ", age:" << t2.getAge() << endl;

    cout <<endl;
    Teacher t3("James");
    cout << "name:" + t3.getName() + ", age:" << t3.getAge() << endl;

    return 0;
}