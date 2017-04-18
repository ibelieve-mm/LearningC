cmake_minimum_required(VERSION 3.7)
project(LearningC)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/cpp_/class_/define_out_class/Teacher.h src/cpp_/class_/define_out_class/Teacher.cpp)
add_executable(LearningC ${SOURCE_FILES})