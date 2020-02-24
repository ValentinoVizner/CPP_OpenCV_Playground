/*
Build process
    CMakeLists.txt defines the whole build
    CMake reads CMakeLists.txt sequentially
    Build process:
        1. cd <project_folder>
        2. mkdir build
        3. cd build
        4. cmake ..
        5. make -j2 # pass your number of cores here
*/

/*

First working CMakeLists.txt
    1 project( first_project ) # Mandatory.
    2 cmake_minimum_required(VERSION 3.1) # Mandatory.
    3 set( CMAKE_CXX_STANDARD 11) # Use c++11.
    4 # tell cmake to output binaries here:
    5 set( EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
    6 set( LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
    7 # tell cmake where to look for *.h files
    8 include_directories(${PROJECT_SOURCE_DIR}/src)
    9 # create library "libtools"
    10 add_library(tools src/tools.cpp)
    11 # add executable main
    12 add_executable(main src/ tools_main .cpp)
    13 # tell the linker to bind these objects together
    14 target_link_libraries(main tools)
*/

/*
Useful commands in CMake
    Just a scripting language
    Has features of a scripting language, i.e.
    functions, control structures, variables, etc.
    All variables are string
    Set variables with set(VAR VALUE)
    Get value of a variable with ${VAR}
    Show a message message(STATUS "message")
    Also possible WARNING, FATAL_ERROR

*/

/*
Use CMake in your builds
    Build process is standard and simple
    No need to remember sequence of commands
    All generated build files are in one place
    CMake detects changes to the files
    Do this after changing files:
        1. cd project/build
        2. make -j2 # pass your number of cores here
*/

/*
Set compilation options in CMake
    1 set ( CMAKE_CXX_STANDARD 14)
    2 # Set build type if not set.
    3 if(NOT CMAKE_BUILD_TYPE )
    4 set( CMAKE_BUILD_TYPE Release)
    5 endif ()
    6 # Set additional flags.
    7 set( CMAKE_CXX_FLAGS "-Wall -Wextra ")
    8 set( CMAKE_CXX_FLAGS_DEBUG "-g -O0")
    9 set( CMAKE_CXX_FLAGS_RELEASE "-O3")
    -Wall -Wextra: show all warnings
        -g: keep debug information in binary
        -O<num>: optimization level in {0, 1, 2, 3}
0: no optimization
3: full optimization
*/

/*
Remove build folder for performing a clean build
    Sometimes you want a clean build
    It is very easy to do with CMake
        1. cd project/build
        2. make clean [remove generated binaries]
        3. rm -r * [make sure you are in build folder]
*/

/*
Use pre-compiled library
    Sometimes you get a compiled library
    You can use it in your build
    For example, given libtools.so it can be used in the project as follows:
        1 find_library(TOOLS
        2 NAMES tools
        3 PATHS ${LIBRARY_OUTPUT_PATH})
        4 # Use it for linking:
        5 target_link_libraries(<some_binary > ${TOOLS})
*/