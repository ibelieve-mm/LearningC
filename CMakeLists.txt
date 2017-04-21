cmake_minimum_required(VERSION 3.7)
project(LearningC)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/cpp_/class_/define_out_class/in_diff_class/Teacher.h src/cpp_/class_/define_out_class/in_diff_class/Teacher.cpp src/cpp_/class_/class_array/Coordinate.h src/cpp_/class_/class_array/Coordinate.cpp src/cpp_/class_/class_member/Line.h src/cpp_/class_/class_member/Line.cpp src/cpp_/class_/class_member/Coordinate.h src/cpp_/class_/class_member/Coordinate.cpp src/cpp_/class_/deep_copy/Array.h src/cpp_/class_/deep_copy/Array.cpp src/cpp_/class_/class_pointer/Coordinate.h src/cpp_/class_/class_pointer/Coordinate.cpp)
add_executable(LearningC ${SOURCE_FILES})