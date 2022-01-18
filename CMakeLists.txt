cmake_minimum_required(VERSION 3.17.3)
project(files_list)

set(CMAKE_CXX_STANDARD 14)

add_executable(files_list main.cpp Graph.cpp Graph.h metrics.cpp metrics.h)