cmake_minimum_required(VERSION 3.13)
project(Unit_Testing)

set(CMAKE_CXX_STANDARD 14)

add_executable(Unit_Testing main.cpp CheckOut.cpp CheckOut.h cmake-build-debug/pch.cpp cmake-build-debug/pch.h)