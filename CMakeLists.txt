cmake_minimum_required(VERSION 3.28)
project(teste_cpp VERSION 0.1.0 LANGUAGES C CXX)

add_executable(teste_cpp main.cpp)
target_link_libraries(teste_cpp PRIVATE mylib cpp_compile_options)

# Copia DLLs necessárias para o diretório de saída do executável
add_custom_target(TARGET teste_cpp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:teste_cpp> $<TARGET_FILE_DIR:teste_cpp> COMMAND_EXPAND_LISTS
)
add_library(cpp_compile_options INTERFACE)
# Set C++20 standard and disable compiler extensions for the interface target
target_compile_features(cpp_compile_options INTERFACE cxx_std_20)
set_target_properties(cpp_compile_options PROPERTIES CXX_EXTENSIONS OFF)

enable_testing()
add_subdirectory(mylib)
add_subdirectory(tests)