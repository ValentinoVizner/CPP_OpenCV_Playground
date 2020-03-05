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

## Run your tests
Build your code just like before  
Add one additional step after building  
1. cd <project_folder>  
2. mkdir build  
3. cd build  
4. cmake ..  
5. make  
6. ctest -VV  

## Namespaces
* module 1
```
namespace module_1 {
    void SomeFunc() {}
}
```

* module 2
```
namespace module 2 {
    void SomeFunc() {}
}
```
* Helps avoiding name conflicts
* Group the project into logical modules

## Namespaces Wrap Up
Use namespaces to avoid name conflicts
```
namespace some_name {
<your_code >
} // namespace some_name
```
Use using correctly
* [**good**]
  * using my_namespace::myFunc;
  * my_namespace::myFunc(…);
* **Never** use using namespace name in *.h files
* Prefer using explicit using even in *.cpp files