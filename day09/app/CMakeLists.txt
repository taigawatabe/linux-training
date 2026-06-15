add_executable(sensor_app main.c)
target_link_libraries(sensor_app PRIVATE sensor)
target_compile_options(sensor_app PRIVATE -Wall -Wextra)
