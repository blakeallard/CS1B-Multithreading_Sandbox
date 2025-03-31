cmake_minimum_required(VERSION 3.30)
project(Multithreading_Sandbox)

set(CMAKE_CXX_STANDARD 20)

add_executable(Multithreading_Sandbox main.cpp
        Student.cpp
        Student.h
)
