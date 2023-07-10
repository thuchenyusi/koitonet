cmake_minimum_required(VERSION 3.11)

project(koitonet VERSION 0.0.1)

include(FetchContent)

FetchContent_Declare(
  cpp-httplib
  GIT_REPOSITORY https://github.com/yhirose/cpp-httplib
)

set(HTTPLIB_INSTALL OFF)

FetchContent_MakeAvailable(cpp-httplib)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(main)
add_subdirectory(server)
add_subdirectory(client)
