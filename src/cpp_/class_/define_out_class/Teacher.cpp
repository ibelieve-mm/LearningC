//
// Created by admin on 2017/4/18.
//

#include "Teacher.h"
#include <iostream>

using namespace std;

/**
 * ����һ��Teacher�࣬Ҫ��ֱ����ͬ�ļ����ⶨ��ͷ��ļ����ⶨ�巽ʽ���
 *
 * ���ݳ�Ա
 * 1. ����
 * 2. ����
 * 3. �Ա�
 *
 * ��Ա����
 * ���ݳ�Ա�ķ�װ
 * �ڿ�teach
 */


/** *************************** ���캯�� ******************************* */
Teacher::Teacher() {
    str_name = "Teacher_default";
    i_age = 10;
    cout << "Teacher()" << endl;
}

// ʹ�ó�ʼ���б�ķ�ʽ�Թ��캯�����г�ʼ��
Teacher::Teacher(string _name, int _age):str_name(_name),i_age(_age) {
    cout << "Teacher(string _name, int _age)������ʼ���б�" << endl;
}

// ʹ�ó��淽ʽ�Թ��캯�����г�ʼ��
//Teacher::Teacher(string _name, int _age) {
//    str_name = _name;
//    i_age = _age;
//    cout << "Teacher(string _name, int _age)" << endl;
//}


/** *************************** �������� ******************************* */

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