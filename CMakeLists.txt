cmake_minimum_required(VERSION 3.21)
project(tests)

set(CMAKE_CXX_STANDARD 14)

add_executable(tests main.cpp flyWeight.cpp adapter.cpp bridge.cpp)
