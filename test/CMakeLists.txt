cmake_minimum_required(VERSION 3.23)
project(test_Discrete_lap1)

add_subdirectory(googletest-main)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(test test_bit_operations.h.cpp test_bits_applications.cpp)
target_link_libraries(test gtest gtest_main)
