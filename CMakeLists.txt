cmake_minimum_required(VERSION 3.16)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 14)
# 包含头文件夹
include_directories(Create/AbstractFactory)
# 包含来源文件夹 (.cpp)
aux_source_directory(Create/AbstractFactory create)

add_executable(DesignPattern ${create})

