cmake_minimum_required(VERSION 3.0)
project(exampleCIproject)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

#compile all src files into one library Core.
add_library(Core src/helloclass.cpp)
add_executable(Main main/main.cpp)
#link with core lib
target_link_libraries(Main Core)
