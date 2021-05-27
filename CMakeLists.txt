cmake_minimum_required(VERSION 3.16)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(Create create)

add_executable(DesignPattern ${create})

