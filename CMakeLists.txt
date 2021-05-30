cmake_minimum_required(VERSION 3.16)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 14)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/Run)
set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/Run)

# 包含头文件夹
include_directories(${PROJECT_SOURCE_DIR})

# use c++11 2
if(CMAKE_VERSION VERSION_LESS "3")
    add_definitions(-std=c++11)
else()
    set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()
message("Build Type " ${CMAKE_BUILD_TYPE})

if (NOT PROJECT_BINARY_DIR)
    set(PROJECT_BINARY_DIR build)
endif()

# 启动测试功能
enable_testing()

add_subdirectory(Code)
add_subdirectory(Template)

