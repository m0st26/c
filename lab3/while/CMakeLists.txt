cmake_minimum_required (VERSION 3.8)

add_library(lab3_while_lib "../for/task5.c")

target_include_directories(lab3_while_lib PUBLIC "../for")

add_executable(lab3_while "main.c")

target_link_libraries(lab3_while lab3_while_lib)