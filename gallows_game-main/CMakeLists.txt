cmake_minimum_required(VERSION 3.19)
project(ClionProjects)

set(CMAKE_CXX_STANDARD 14)

add_executable(ClionProjects main.cpp)

configure_file(resources/arial.ttf resources/arial.ttf COPYONLY)
configure_file(resources/words.txt resources/words.txt COPYONLY)

add_executable(test test.cpp)

set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML REQUIRED system window graphics)
target_link_libraries(ClionProjects sfml-graphics)
