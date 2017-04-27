//
// Created by admin on 2017/4/27.
//
#include <iostream>
#include "Infantry.h"

using namespace std;

void Infantry::attack() {
//    _strName = "Infantry"; // 错误，Solider privated 继承Person后，_strName 属于私有，不能被访问
//    cout << "(extend_private :: Infantry) :: attack() --> name:" + _strName << endl; // 同上
    cout << "(extend_private :: Infantry) :: attack() " << endl;
}