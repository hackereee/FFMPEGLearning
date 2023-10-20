cmake_minimum_required(VERSION 3.10)
project(Practice1 VERSION 1.0.222)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(Practice1 practice.cpp)

configure_file(PracticeConfig.h.in PracticeConfig.h)
target_include_directories(Practice1 PUBLIC "${PROJECT_BINARY_DIR}")