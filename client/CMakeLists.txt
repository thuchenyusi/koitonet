add_library(client "")
add_library(lib::client ALIAS client)
target_sources(client PRIVATE ${CMAKE_CURRENT_LIST_DIR}/client.cpp)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.50 REQUIRED)
message(STATUS "Boost version: ${Boost_VERSION}")

target_include_directories(client PUBLIC ${CMAKE_CURRENT_LIST_DIR})
