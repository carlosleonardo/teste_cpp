cmake_minimum_required(VERSION 3.28)
project(mylib)

add_library(mylib SHARED my_atoi.cpp)
target_link_libraries(mylib PRIVATE cpp_compile_options)
target_include_directories(mylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})