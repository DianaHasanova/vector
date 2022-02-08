cmake_minimum_required(VERSION 3.20)
project(vectors C)

set(CMAKE_C_STANDARD 11)

add_executable(vectors main.c libs/data_structures/vector/vector.c libs/data_structures/vector/vector.h)

add_subdirectory(libs)
target_link_libraries(vectors data_structures)