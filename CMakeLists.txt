cmake_minimum_required(VERSION 3.17)
project(Graphs)

set(CMAKE_CXX_STANDARD 17)

add_executable(Graphs main.cpp Graph.cpp Graph.h src/AdjList.cpp)