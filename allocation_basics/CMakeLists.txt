cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(jipp2)

add_executable(jipp2 main.cpp ../5/5.cpp)

target_link_libraries(jipp2 pthread)