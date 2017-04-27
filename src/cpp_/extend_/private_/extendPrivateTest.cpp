//
// Created by admin on 2017/4/27.
//

#include <iostream>
#include "Solider.h"
#include "Infantry.h"

using namespace extend_private;

void extendPrivateInvoke() {
    Solider solider;
    solider.work();
//    solider.play();

    cout << "-----------------------------------------------------" << endl;

    Infantry infantry;
    infantry.work();
    infantry.attack();
}
