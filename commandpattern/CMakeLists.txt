cmake_minimum_required(VERSION 3.5)

project(commandpattern LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(commandpattern main.cpp
    receiver.h receiver.cpp
    invoker.h invoker.cpp
    command.h command.cpp
    concretecommand.h concretecommand.cpp)
