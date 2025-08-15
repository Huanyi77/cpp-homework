cmake_minimum_required(VERSION 3.10)
project(oop_shapes CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shapes_demo
    src/main.cpp
    src/utils.cpp
    src/Point.cpp
    src/Circle.cpp
    src/Rectangle.cpp
)
target_include_directories(shapes_demo PRIVATE ${CMAKE_SOURCE_DIR}/src)
