//
// Created by ChenME on 2017/4/20.
//

#ifndef LEARNINGC_ARRAY_H
#define LEARNINGC_ARRAY_H

#endif //LEARNINGC_ARRAY_H


namespace deep_array {
    class Array {
    public:
        Array(int count);

        Array(const Array &arr);

        ~Array();

        void setCount(int count);

        int getCount();

        void printAddr();

        void printArr();

    private:
        int _iCount;
        int *_pArr;
    };
}