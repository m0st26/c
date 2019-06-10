cmake_minimum_required (VERSION 3.8)

add_library(lab7_lib "task1.c" "task2.c" "task3.c" "task4.c" "task5.c" "task6.c")

target_include_directories(lab7_lib PUBLIC "")

add_executable(lab7_task7 "main.c")

target_link_libraries(lab7_task7 lab7_lib)
