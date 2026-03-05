cmake_minimum_required(VERSION 3.28)
project(mylib)

add_library(mylib SHARED my_atoi.cpp)
target_link_libraries(mylib PRIVATE cpp_compile_options)
set_target_properties(mylib PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)