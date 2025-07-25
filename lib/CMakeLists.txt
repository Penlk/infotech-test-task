if(BUILD_SHARED_LIBS)
    add_library(magazine_share SHARED 
        magazine.cpp
    )
    target_include_directories(magazine_share PUBLIC include)
    set_target_properties(magazine_share PROPERTIES OUTPUT_NAME "logger")
    
    add_library(library ALIAS magazine_share)
else()
    add_library(magazine_static STATIC 
        magazine.cpp
    )
    target_include_directories(magazine_static PUBLIC include)
    set_target_properties(magazine_static PROPERTIES OUTPUT_NAME "logger")
    add_library(library ALIAS magazine_static)
endif()