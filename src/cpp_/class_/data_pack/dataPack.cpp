/**
 * Descriptions：数据的封装
 * dataPackage
 * <p>
 * Author：ChenME
 * Date：2017/4/18
 * Email：ibelieve1210@163.com
 */

#include <iostream>

using namespace std;

/**
 * 封装一个Student类，包含如下信息
 * 1. 姓名
 * 2. 性别
 * 3. 学分（只读）
 * 4. 学习
 */
class Student {
public:
    void setName(string _name) {
        str_name = _name;
    }

    string getName() {
        return str_name;
    }

    void setGender(string _gender) {
        str_gender = _gender;
    }

    string getGender() {
        return str_gender;
    }

    int getScore() {
        return i_score;
    }

    void initScore() {
        i_score = 0;
    }

    void study(int _score) {
        i_score += _score;
    }

private:
    string str_name;
    string str_gender;
    int i_score;
};

void dataPackInvoke() {

    Student stu;
    stu.initScore();
    stu.setName("Tom");
    stu.setGender("f");
    stu.study(2);
    stu.study(3);

    cout << "name:" + stu.getName() + ", gender:" + stu.getGender() + ", score:" << stu.getScore() << endl;
}