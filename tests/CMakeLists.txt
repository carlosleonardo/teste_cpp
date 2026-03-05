cmake_minimum_required(VERSION 3.28)
project(mylib_tests)

add_executable(tests test_mylib.cpp)
target_link_libraries(tests PRIVATE mylib cpp_compile_options)
add_test(NAME mylib_test COMMAND tests)
add_custom_command(TARGET tests POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:mylib> $<TARGET_FILE_DIR:tests>
        COMMAND_EXPAND_LISTS
)