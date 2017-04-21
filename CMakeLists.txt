cmake_minimum_required(VERSION 3.7)
project(LearningC)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp

        #        c++中引用的使用
        src/cpp_/base/quote_/quote_.h
        src/cpp_/base/quote_/quote_.cpp

        #        字符串的使用
        src/cpp_/base/string_/string_.h
        src/cpp_/base/string_/string_.cpp

        #        类的实例化
        src/cpp_/class_/create_class/createClass.h
        src/cpp_/class_/create_class/createClass.cpp

        #        数据封装
        src/cpp_/class_/data_pack/dataPack.h
        src/cpp_/class_/data_pack/dataPack.cpp

        #        类外定义(同文件)
        src/cpp_/class_/define_out_class/in_same_file/defineOutClassInSameFile.h
        src/cpp_/class_/define_out_class/in_same_file/defineOutClassInSameFile.cpp

        #        类外定义(分文件)
        src/cpp_/class_/define_out_class/in_diff_file/Teacher.h
        src/cpp_/class_/define_out_class/in_diff_file/Teacher.cpp
        src/cpp_/class_/define_out_class/in_diff_file/defineOutClassInDiffFile.h
        src/cpp_/class_/define_out_class/in_diff_file/defineOutClassInDiffFile.cpp

        #        对象数组
        src/cpp_/class_/class_array/Coordinate.h
        src/cpp_/class_/class_array/Coordinate.cpp
        src/cpp_/class_/class_array/classArray.h
        src/cpp_/class_/class_array/classArray.cpp

        #        对象成员
        src/cpp_/class_/class_member/Line.h
        src/cpp_/class_/class_member/Line.cpp
        src/cpp_/class_/class_member/Coordinate.h
        src/cpp_/class_/class_member/Coordinate.cpp
        src/cpp_/class_/class_member/classMember.h
        src/cpp_/class_/class_member/classMember.cpp

        #        深copy
        src/cpp_/class_/deep_copy/Array.h
        src/cpp_/class_/deep_copy/Array.cpp
        src/cpp_/class_/deep_copy/deepCopy.h
        src/cpp_/class_/deep_copy/deepCopy.cpp

        #        对象指针的使用
        src/cpp_/class_/class_pointer/Coordinate.h
        src/cpp_/class_/class_pointer/Coordinate.cpp
        src/cpp_/class_/class_pointer/classPointer.h
        src/cpp_/class_/class_pointer/classPointer.cpp)
add_executable(LearningC ${SOURCE_FILES})