cmake_minimum_required(VERSION 3.21)
project(GrafoKRUSKAL)

set(CMAKE_CXX_STANDARD 14)

add_executable(GrafoKRUSKAL main.cpp Graph.cpp Graph.h DisjointSets.cpp DisjointSets.h)
