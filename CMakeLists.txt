cmake_minimum_required(VERSION 3.20)
project(labor2 C)

set(CMAKE_C_STANDARD 11)

add_executable(labor2 main.c src/functions.c headers/functions.h headers/konstans.h)
include_directories(labor2 headers)