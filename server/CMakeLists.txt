add_library(server "")
add_library(lib::server ALIAS server)
target_sources(server PRIVATE ${CMAKE_CURRENT_LIST_DIR}/server.cpp)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.50 REQUIRED)
message(STATUS "Boost version: ${Boost_VERSION}")

target_include_directories(server PUBLIC ${CMAKE_CURRENT_LIST_DIR})
