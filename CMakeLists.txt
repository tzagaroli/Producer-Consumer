cmake_minimum_required(VERSION 3.10)

# Project name and language
project(Producer-Consumer LANGUAGES CXX)

# Set C++ standard (for example, C++17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Include directory (for headers)
include_directories(inc)

# Collect all source files automatically
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Define the executable
add_executable(${PROJECT_NAME} ${SOURCES})
