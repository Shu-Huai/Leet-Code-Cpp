cmake_minimum_required(VERSION 3.27)
project(Leet-Code)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE DIR_LIST "*/*.cpp")
add_executable(Leet-Code main.cpp
        includes/ts.h
        templates/TestTemplates.cpp
        utils/Printer.h
)
add_library(
        Problems STATIC
        ${DIR_LIST}
)
