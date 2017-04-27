//
// Created by admin on 2017/4/27.
//

#ifndef LEARNINGC_SOLIDER_H
#define LEARNINGC_SOLIDER_H

#include "Person.h"

using namespace extend_hide;
namespace extend_hide {
    class Solider : public Person {
    public:
        Solider();

        void play();

        void say(int age);

        void work();

    protected:
        string  _strName;
    };
}

#endif //LEARNINGC_SOLIDER_H
