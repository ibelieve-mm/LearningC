//
// Created by admin on 2017/4/27.
//

#include <iostream>
#include "Worker.h"

using namespace std;
using namespace extend_public;

Worker::Worker() {
    cout << "(extend_base) Worker()" << endl;
}

Worker::~Worker() {
    cout << "(extend_base) ~Worker()" << endl;
}

void Worker::work() {
    _strName = "ChenME_worker";
//    _iAge = 20; // 错误
    cout << "(extend_base) work()" << endl;
}