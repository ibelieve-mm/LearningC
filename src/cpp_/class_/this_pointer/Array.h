//
// Created by admin on 2017/4/25.
//
namespace this_pointer {
    class Array {
    public:
        Array(int len);

        ~Array();


        int getLen();

//        Array &setLen(int len);

//        Array &printInfo();

        Array *setLen(int len);

        Array *printInfo();

    private:
        int len;
    };
}