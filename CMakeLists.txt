cmake_minimum_required(VERSION 3.28.3)

project(
    magazin_library
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_C_COMPILER g)
# set(CMAKE_CXX_COMPILER g++)

add_subdirectory(bin)
add_subdirectory(lib)