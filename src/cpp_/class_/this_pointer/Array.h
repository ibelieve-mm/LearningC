//
// Created by admin on 2017/4/25.
//
namespace this_pointer {
    class Array {
    public:
        Array(int len);

        ~Array();

        Array& setLen(int len);

        int getLen();

        Array& printInfo();

    private:
        int len;
    };
}