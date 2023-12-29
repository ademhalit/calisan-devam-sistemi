cmake_minimum_required(VERSION 3.26)
project(calisan_devam_sistemi C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(calisan_devam_sistemi
        index.c)
