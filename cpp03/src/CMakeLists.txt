add_library(hello hello.cpp)
add_library(blah blah.cpp)

add_executable(cpp03_testis main.cpp)
target_link_libraries(cpp03_testis hello blah)