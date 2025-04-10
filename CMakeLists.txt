cmake_minimum_required(VERSION 3.30)
project(Coen243Project)

set(CMAKE_CXX_STANDARD 20)

add_executable(Coen243Project main.cpp
        Student.cpp
        Student.h
        Staff.cpp
        Staff.h
        StudentStaff.cpp
        StudentStaff.h)
