cmake_minimum_required (VERSION 3.8)

add_library(lab5_functions_lib "functions.c")

target_include_directories(lab5_functions_lib PUBLIC "")

add_executable (lab5_task7 "main.c")

target_link_libraries(lab5_task7 lab5_functions_lib)
