cmake_minimum_required(VERSION 3.15)

#Define project name, version and language
project(molecular_weight VERSION 1.0.0 LANGUAGES CXX)

#Enforce C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Define the executables and its source files
add_executable(my_app src/main.cpp)

#specify where the compiler should look for header files
target_include_directories(my_app PRIVATE include)
