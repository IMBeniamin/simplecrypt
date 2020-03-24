cmake_minimum_required(VERSION 3.16)
project(simplecrypt C)

set(CMAKE_C_STANDARD 11)

add_executable(simplecrypt main.c crypting.h crypting.c decrypting.h decrypting.c randgen.c randgen.h globals.h)