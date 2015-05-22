cmake_minimum_required(VERSION 3.2)
project(AdvancedMammalFactory)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    AdvancedMammalFactory/AdvancedMammalFactory.cpp
    AdvancedMammalFactory/Cat.cpp
    AdvancedMammalFactory/Cat.h
    AdvancedMammalFactory/Dog.cpp
    AdvancedMammalFactory/Dog.h
    AdvancedMammalFactory/Mammal.cpp
    AdvancedMammalFactory/Mammal.h
    AdvancedMammalFactory/MammalFactory.cpp
    AdvancedMammalFactory/MammalFactory.h
    AdvancedMammalFactory/stdafx.h)

add_executable(AdvancedMammalFactory ${SOURCE_FILES})