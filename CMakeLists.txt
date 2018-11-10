cmake_minimum_required(VERSION 2.8.11)
project(utility)

set(CMAKE_CXX_STANDARD 11)

set(GTEST googletest-release-1.8.1)
include_directories("./include" "${GTEST}/googletest/include/")
link_directories("build/gtest/googlemock/gtest/")

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} --coverage")

add_library(${CMAKE_PROJECT_NAME}_lib src/utility.cpp)

add_executable(unit_test test/unit_test.cpp)
target_link_libraries(unit_test ${CMAKE_PROJECT_NAME}_lib gtest gtest_main pthread)