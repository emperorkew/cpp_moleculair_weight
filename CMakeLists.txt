cmake_minimum_required(VERSION 3.15)

#Define project name, version and language
project(molecular_weight VERSION 1.0.0 LANGUAGES CXX)

#Enforce C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
FetchContent_Declare(
  json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
  GIT_TAG v3.11.3
)
FetchContent_MakeAvailable(json)

#Define the executables and its source files
add_executable(my_app src/main.cpp src/periodic_table.cpp)

#specify where the compiler should look for header files
target_include_directories(my_app PRIVATE include)
target_link_libraries(my_app PRIVATE nlohmann_json::nlohmann_json)

file(COPY ${CMAKE_SOURCE_DIR}/data DESTINATION ${CMAKE_BINARY_DIR})
