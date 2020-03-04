## Use Gtest to test your functions

* Catch bugs early to fix them with less pain
* Testing is crucial to catch bugs early
* For every function write at least two tests
    1. One for normal cases
    2. One for extreme cases

* **Make writing tests a habit**
  
## How to test

* Google dummy test:
</br>
`TEST(TestModule , FunctionName ) {  
    EXPECT_EQ (4, FunctionName ());
}`

### Enable test folder in CMake

1 # Must be in the top-most CMakeLists.txt file.</br>
2 enable_testing ()</br>

3 # Outsource tests to another folder.</br>
4 add_subdirectory(tests)</br>

### Configure tests

 Add gtest sources folder. Provides gtest , gtest_main.  
add_subdirectory(/ usr/src/gtest  
${PROJECT_BINARY_DIR}/gtest)  
include(CTest) # Include testing cmake package.  
 Set binary name for convenience.  
set( TEST_BINARY ${PROJECT_NAME}_test)  
 This is an executable that runs the tests.  
add_executable(${TEST_BINARY} test_tools .cpp)  
 Link the executable to needed libraries.  
 target_link_libraries(${TEST_BINARY}  
 tools # Library we are testing  
 gtest gtest_main # GTest libraries  
 )  
  Add gtest to be able to run ctest  
 add_test(  
 NAME ${TEST_BINARY}  
 COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_BINARY})  