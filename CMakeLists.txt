cmake_minimum_required(VERSION 3.19)
project(ejemploRepositorio)

set(CMAKE_CXX_STANDARD 14)

add_executable(ejemploRepositorio main.cpp Student.cpp Student.h ManagmentStudents.cpp ManagmentStudents.h)