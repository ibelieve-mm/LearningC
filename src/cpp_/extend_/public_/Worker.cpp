//
// Created by admin on 2017/4/27.
//

#include <iostream>
#include "Worker.h"

using namespace std;
using namespace extend_public;

Worker::Worker() {
    cout << "(extend_public) Worker()" << endl;
}

Worker::~Worker() {
    cout << "(extend_public) ~Worker()" << endl;
}

void Worker::work() {
    _strName = "Worker";
//    _iAge = 1; // 错误
    cout << "(extend_public) work()" << endl;
}