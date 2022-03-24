cmake_minimum_required(VERSION 3.21)
project(lab5)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab5 main.cpp console/console.cpp console/console.h menu/menu.cpp menu/menu.h Square/Square.cpp Square/Square.h)
