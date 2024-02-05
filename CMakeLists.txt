cmake_minimum_required(VERSION 3.27)
project(Socket_Programming C)

set(CMAKE_C_STANDARD 11)

add_executable(Socket_Programming
        socketclient/main.c)
