cmake_minimum_required(VERSION 3.0)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

option(USE_FLOAT "Use floating point" OFF)

if(USE_FLOAT)
    add_compile_definitions(USE_FLOAT)
endif()

add_executable(code code.cpp)
