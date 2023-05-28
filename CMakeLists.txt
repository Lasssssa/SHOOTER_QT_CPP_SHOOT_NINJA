cmake_minimum_required(VERSION 3.18)
project(prog)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)

find_package(Qt6Widgets CONFIG REQUIRED)

file (GLOB_RECURSE CIR2_sceneview_src src/*.cpp src/*.h)

add_executable(prog ${CIR2_sceneview_src})

target_link_libraries(prog Qt6::Widgets)