add_executable(koito "")

target_sources(koito PRIVATE main.cpp)
target_link_libraries(koito PRIVATE lib::server lib::client)
