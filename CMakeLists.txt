cmake_minimum_required(VERSION 3.29)
project(c99_learning C)

set(CMAKE_C_STANDARD 99)

add_executable(c99_learning main.c
        fang.h
        lee.h)
