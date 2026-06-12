cmake_minimum_required(VERSION 3.16)
project(Calculator VERSION 1.0)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(calculator main.c calc.c)
target_compile_options(calculator PRIVATE -Wall -Wextra)
