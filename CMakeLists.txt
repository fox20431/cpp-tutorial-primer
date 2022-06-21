# it is necessary that you declare the specified files in this file if you want ide (CLion) to recognize which main program can be run.
cmake_minimum_required(VERSION 3.22)
project(cpp_tutorial-samples)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

# declare all cpp files as `SAMPLES_SRC_LIST`
file(GLOB SAMPLES_SRC_LIST "*.cpp")
add_executable(build ${SAMPLES_SRC_LIST})
