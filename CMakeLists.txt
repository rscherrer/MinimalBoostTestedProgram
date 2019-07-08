cmake_minimum_required(VERSION 3.13)
project(Program)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(Program ${SOURCE_FILES})

include_directories(library)

add_subdirectory(library)
add_subdirectory(tests)

target_link_libraries(Program library)