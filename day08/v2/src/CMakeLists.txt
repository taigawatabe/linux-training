add_executable(calculator main.c)
target_link_libraries(calculator PRIVATE calc)
target_compile_options(calculator PRIVATE -Wall -Wextra)
