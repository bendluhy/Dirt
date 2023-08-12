cmake_minimum_required(VERSION 3.22.1 FATAL_ERROR)

project(dirt)
set(CMAKE_CXX_STANDARD 11)

include_directories(include)  # Include directory for header files

set(ENGINE_SOURCE
    ${CMAKE_CURRENT_LIST_DIR}/src/engine.cpp
)

add_library(dirt STATIC ${ENGINE_SOURCE})

find_package(glfw3 3.3 REQUIRED)
find_package(GLUT REQUIRED)

set(TESTING_SOURCE
    ${CMAKE_CURRENT_LIST_DIR}/test/testing.cpp
)

add_executable(test ${TESTING_SOURCE})

target_link_libraries(test
    dirt
    glfw
    -lGL
    -lX11
    -lpthread
    -lXrandr
    -lXi
    -ldl
)
