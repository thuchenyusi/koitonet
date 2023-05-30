add_executable(koito "")
target_sources(koito PRIVATE main.cpp)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.50 REQUIRED)
message(STATUS "Boost version: ${Boost_VERSION}")
