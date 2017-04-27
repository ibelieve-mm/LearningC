//
// Created by admin on 2017/4/27.
//

#ifndef LEARNINGC_SOLIDER_H
#define LEARNINGC_SOLIDER_H

#include "Person.h"

using namespace extend_private;
namespace extend_private {
    class Solider : private Person {
    public:
        Solider();

        void work();

    protected:
        int _iAge;
    };
}

#endif //LEARNINGC_SOLIDER_H
