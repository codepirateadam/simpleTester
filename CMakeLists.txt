cmake_minimum_required(VERSION 3.8)
project(simpleTester)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp SinglyLinkList.cpp SinglyLinkList.h Queue.cpp Queue.h BinaryTree.cpp BinaryTree.h)
add_executable(simpleTester ${SOURCE_FILES})