cmake_minimum_required(VERSION 3.15)
project(gmc CXX)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_executable(gmc gmc.cpp main.cpp)

target_link_libraries(gmc CONAN_PKG::glad)
target_link_libraries(gmc CONAN_PKG::glfw)