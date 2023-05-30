cmake_minimum_required(VERSION 3.11)

project(koitonet VERSION 0.0.1)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(main)
add_subdirectory(server)
