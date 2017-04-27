//
// Created by admin on 2017/4/27.
//

#ifndef LEARNINGC_PERSON_H
#define LEARNINGC_PERSON_H

#include <string>

using namespace std;
namespace extend_private {
    class Person {
    public:
        Person();

        void play();

    protected:
        string _strName;
    };
}

#endif //LEARNINGC_PERSON_H
