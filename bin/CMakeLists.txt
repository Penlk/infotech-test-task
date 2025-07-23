add_executable(main_target main.cpp)

target_include_directories(main_target PRIVATE ${PROJECT_SOURCE_DIR}/lib)

target_link_libraries(main_target PRIVATE library)