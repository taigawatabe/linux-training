add_library(calc STATIC calc.c)
target_include_directories(calc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
