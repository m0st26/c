cmake_minimum_required (VERSION 3.8)

add_library(lab4_task6_lib "../task1/task1.c" "../task5/task5.c")

target_include_directories(lab4_task6_lib PUBLIC "../task1" "../task5")

add_executable (lab4_task6 "task6.c")

target_link_libraries(lab4_task6 lab4_task6_lib)