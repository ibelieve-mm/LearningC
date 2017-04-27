cmake_minimum_required(VERSION 3.7)
project(LearningC)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp

        #        c语言回顾
        src/c_/function/functionTest.h
        src/c_/function/functionTest.cpp
        src/c_/c_test/cTest.h
        src/c_/c_test/cTest.cpp
        src/c_/bit_operation/bitOperation.h
        src/c_/bit_operation/bitOperation.cpp
        src/c_/link/linkStatic.h
        src/c_/link/linkStatic.cpp
        src/c_/link/linkDynamic.h
        src/c_/link/linkDynamic.cpp
        src/c_/reviewCAll.h
        src/c_/reviewCAll.cpp

        #####################################################################################################

        #        内存的管理
        src/cpp_/base/memory_manage/manageMemory.h
        src/cpp_/base/memory_manage/manageMemory.cpp

        #        函数参数默认值的使用
        src/cpp_/base/default_para_fun/defaultParaFun.h
        src/cpp_/base/default_para_fun/defaultParaFun.cpp

        #        const的使用
        src/cpp_/base/const_/const_.h
        src/cpp_/base/const_/const_.cpp

        #        io Demo以及namespace的使用
        src/cpp_/base/io_namespace/ioTest.h
        src/cpp_/base/io_namespace/ioTest.cpp
        src/cpp_/base/io_namespace/nameSpaceTest.h
        src/cpp_/base/io_namespace/nameSpaceTest.cpp
        src/cpp_/base/io_namespace/ioNamespace.h
        src/cpp_/base/io_namespace/ioNamespace.cpp

        #        c++中引用的使用
        src/cpp_/base/quote_/quote_.h
        src/cpp_/base/quote_/quote_.cpp

        #        字符串的使用
        src/cpp_/base/string_/string_.h
        src/cpp_/base/string_/string_.cpp

        ####################################################################################################

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
        src/cpp_/class_/class_pointer/classPointer.cpp

        #        对象成员指针
        src/cpp_/class_/class_memeber_pointer/Coordinate.h
        src/cpp_/class_/class_memeber_pointer/Coordinate.cpp
        src/cpp_/class_/class_memeber_pointer/Line.h
        src/cpp_/class_/class_memeber_pointer/Line.cpp
        src/cpp_/class_/class_memeber_pointer/demoClassMemeberPointer.h
        src/cpp_/class_/class_memeber_pointer/demoClassMemeberPointer.cpp

        #        this指针的使用
        src/cpp_/class_/this_pointer/Array.h
        src/cpp_/class_/this_pointer/Array.cpp
        src/cpp_/class_/this_pointer/thisPointerTest.h
        src/cpp_/class_/this_pointer/thisPointerTest.cpp

        #        常对象、常函数、常对象
        src/cpp_/class_/const_function/constFunTest.h
        src/cpp_/class_/const_function/constFunTest.cpp
        src/cpp_/class_/const_function/Coordinate.h
        src/cpp_/class_/const_function/Coordinate.cpp
        src/cpp_/class_/const_function/Line.h
        src/cpp_/class_/const_function/Line.cpp

        #        #        迷宫
        #        src/cpp_/maze/MazeMap.h
        #        src/cpp_/maze/MazeMap.cpp
        #        src/cpp_/maze/MazePerson.h
        #        src/cpp_/maze/MazePerson.cpp
        #        src/cpp_/maze/MyMazer.H
        #        src/cpp_/maze/MyMazer.cpp
        #        src/cpp_/maze/MyMazeMap.H
        #        src/cpp_/maze/MyMazeMap.cpp
        #        src/cpp_/maze/Public.H
        #        src/cpp_/maze/maze.h
        #        src/cpp_/maze/maze.cpp

        ########################################################################################

        #        公有继承
        src/cpp_/extend_/public_/Person.h
        src/cpp_/extend_/public_/Person.cpp
        src/cpp_/extend_/public_/Worker.h
        src/cpp_/extend_/public_/Worker.cpp
        src/cpp_/extend_/public_/extendPublicTest.h
        src/cpp_/extend_/public_/extendPublicTest.cpp

        #        私有继承
        src/cpp_/extend_/private_/Person.h
        src/cpp_/extend_/private_/Person.cpp
        src/cpp_/extend_/private_/Solider.h
        src/cpp_/extend_/private_/Solider.cpp
        src/cpp_/extend_/private_/Infantry.h
        src/cpp_/extend_/private_/Infantry.cpp
        src/cpp_/extend_/private_/extendPrivateTest.h
        src/cpp_/extend_/private_/extendPrivateTest.cpp


        )
add_executable(LearningC ${SOURCE_FILES})