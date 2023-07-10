add_library(server "")
add_library(lib::server ALIAS server)

target_sources(server PRIVATE ${CMAKE_CURRENT_LIST_DIR}/server.cpp)
target_include_directories(server PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(server PRIVATE httplib::httplib)
