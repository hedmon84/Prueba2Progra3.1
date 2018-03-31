cmake_minimum_required(VERSION 3.7)
project(Prueba2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Utilidades.cpp Utilidades.h)
add_executable(Prueba2 ${SOURCE_FILES})