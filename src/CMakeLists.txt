cmake_minimum_required(VERSION 3.23)
project(src_Discrete_lap1)
set(CMAKE_CXX_STANDARD 20)

add_executable(Discrete_lap1 main.cpp bits_applications.h bit_operations.h set_operations.h UI/main_screen.h UI/bit_operations_screen.h UI/bits_applications_screen.h)