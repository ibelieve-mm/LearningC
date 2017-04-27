//
// Created by admin on 2017/4/27.
//

#ifndef LEARNINGC_PERSON_H
#define LEARNINGC_PERSON_H

#include <string>

using namespace std;
namespace extend_public {
    class Person {
    public:
        Person();

        ~Person();

        void eat();

    protected:
        string _strName;

    private:
        int _iAge;
    };
}

#endif //LEARNINGC_PERSON_H
