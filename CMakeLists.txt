# CMake project
cmake_minimum_required(VERSION 4.1)
project(qlog)

# Executable
add_executable(main "src/main.cpp")

# Include directories
target_include_directories(main PRIVATE "lib/qlog/include/")