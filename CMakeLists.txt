cmake_minimum_required(VERSION 3.7)
project(weeee)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES testinequalities.cpp inequalities.cpp Inequalities.h)
add_executable(weeee ${SOURCE_FILES})