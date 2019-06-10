cmake_minimum_required (VERSION 3.8)

add_library(lab3_for_lib "../for/task5.c")

target_include_directories(lab3_for_lib PUBLIC "../for")

add_executable(lab3_for "main.c")

target_link_libraries(lab3_for lab3_for_lib)