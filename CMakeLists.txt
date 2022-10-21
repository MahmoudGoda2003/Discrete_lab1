cmake_minimum_required(VERSION 3.23)
project(Discrete_lap1)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(lap1 src/main.cpp)
add_subdirectory(src)
add_subdirectory(test)
