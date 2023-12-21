cmake_minimum_required(VERSION 3.10)
project(Practice VERSION 1.0.222)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
#增加预编译条件，如果USE_MYMATH为ON，则使用自己的MathFunctions库
option(USE_MYMATH "Use tutorial provided math implementation" ON)
#配置一个头文件，用于传递一些CMake的设置给源代码
configure_file(PracticeConfig.h.in PracticeConfig.h)
#增加MathFunctions库
if(USE_MYMATH)
    add_subdirectory(../Library/MathFunctions MathFunctions)
    list(APPEND EXTRA_LIBS MathFunctions)
    #list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/Library/MathFunctions")
endif()
#增加可执行文件
add_executable(Practice practice.cpp Part2.cpp)
#链接MathFunctions库   
if(USE_MYMATH)
    target_link_libraries(Practice PUBLIC MathFunctions)
endif()

# target_include_directories(Practice PUBLIC "${PROJECT_BINARY_DIR}" "{PROJECT_SOURCE_DIR}/Library/MathFunctions" "{PROJECT_SOURCE_DIR}/include" )
target_include_directories(Practice PUBLIC "${PROJECT_BINARY_DIR}" "{PROJECT_SOURCE_DIR}/include" )
