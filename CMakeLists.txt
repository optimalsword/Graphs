cmake_minimum_required(VERSION 3.17)
project(Graphs)

set(CMAKE_CXX_STANDARD 17)

add_executable(Graphs main.cpp src/AdjList.cpp include/UndirectedGraph.h src/UndirectedGraph.cpp Visitors/TraversalVisitor.h Visitors/DFSVisitor.cpp Visitors/DFSVisitor.h include/algo.h src/algo.cpp)