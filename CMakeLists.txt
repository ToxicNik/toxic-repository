# cmake_minimum_required(VERSION <specify CMake version here>)
project(toxic-repository C)

set(CMAKE_C_STANDARD 11)

add_executable(toxic-repository src/Main.c src/Task1.c src/Task1.h src/map.c src/map.h Tests/mapTest.c Tests/mapTest.h Tests/Task1Test.c Tests/Task1Test.h Tests/ASSERTS.c Tests/ASSERTS.h)