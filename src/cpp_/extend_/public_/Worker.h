//
// Created by admin on 2017/4/27.
//

#ifndef LEARNINGC_WORKER_H
#define LEARNINGC_WORKER_H

#include "Person.h"

using namespace extend_public;

namespace extend_public {
    class Worker : public Person {
    public:
        Worker();

        ~Worker();

        void work();

        int _iSalary;
    };
}

#endif //LEARNINGC_WORKER_H
