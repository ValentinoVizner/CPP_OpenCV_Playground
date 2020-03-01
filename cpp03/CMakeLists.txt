cmake_minimum_required(VERSION 3.0.0)
project(cmake_test_projects VERSION 0.1.0)

include(CTest)
enable_testing()

message(STATUS "!!!! ${PROJECT_SOURCE_DIR}")

include_directories(${PROJECT_SOURCE_DIR}/src)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_executable(cmake_test_projects src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
