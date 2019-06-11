cmake_minimum_required (VERSION 3.8)
add_library(lab5_functions_lib "functions.c")
add_executable (lab5 "main.c")
target_link_libraries(lab5 lab5_functions_lib)
