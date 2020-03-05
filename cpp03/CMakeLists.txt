cmake_minimum_required(VERSION 3.0.0)
project(cpp03_test VERSION 0.1.0)

include_directories(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/src)
enable_testing() # Must be defined in top-most CMakelists.txt
add_subdirectory(tests)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
