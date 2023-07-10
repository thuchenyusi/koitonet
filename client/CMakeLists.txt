add_library(client "")
add_library(lib::client ALIAS client)

target_sources(client PRIVATE ${CMAKE_CURRENT_LIST_DIR}/client.cpp)
target_include_directories(client PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_directories(client PRIVATE httplib::httplib)
