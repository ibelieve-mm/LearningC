//
// Created by admin on 2017/4/27.
//

#include <iostream>
#include "Solider.h"

using namespace std;
using namespace extend_private;

Solider::Solider() {

}

void Solider::work() {
    _strName = "Solider";
    _iAge = 1;
    cout << "(extend_private :: Solider) :: work() --> name:" + _strName + ", age:" << _iAge << endl;
}