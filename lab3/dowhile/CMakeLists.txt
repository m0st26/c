cmake_minimum_required (VERSION 3.8)

add_library(lab3_do_while_lib "../dowhile/task5.c")

target_include_directories(lab3_do_while_lib PUBLIC "../dowhile")

add_executable(lab3_do_while "main.c")

target_link_libraries(lab3_do_while lab3_do_while_lib)