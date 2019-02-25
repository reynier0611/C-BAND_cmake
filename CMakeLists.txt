# Set up
cmake_minimum_required (VERSION 2.6)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules")
find_package(ROOT REQUIRED)

# Project name
project (C++BAND)

# ADD SUBDIRECTORIES
add_subdirectory(Examples)
add_subdirectory(Hipo)

include_directories(${CMAKE_SOURCE_DIR}/Hipo ${ROOT_INCLUDE_DIR})
