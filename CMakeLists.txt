cmake_minimum_required(VERSION 3.28.3)

project(
    magazine_library
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
option(BUILD_SHARED_LIBS "Build shared libraries" ON)
option(BUILD_STATIC_LIBS "Build static libraries" ON)

add_subdirectory(bin)
add_subdirectory(lib)