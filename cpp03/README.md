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

## Nameless namespaces
If you find yourself relying on some contstants in a file and these constants should not be seen in any other file, put them into a
nameless namespace on the top of this file

```
namespace {
const int kLocalInt = 13;
const float kLocalFloat = 13.0f;
} // namespace
```
## Create new types with classes and structs

* Classes are used to encapsulate data along with methods to process them
* Every `class` or `struct` defines a new type
*Terminology:
    * Type or **class** to talk about the defined type
    * A variable of such type is an instance of class or an object
* Classes allow C++ to be used as an
* Object Oriented Programming language
* `string`, `vector`, etc. are all classes

## What about structs?
* Definition starts with the keyword `struct`
```
struct ExampleStruct {
Type value;
Type value;
Type value;
// No functions!
};
```
* `struct` is a `class` where everything is `public`
* GOOGLE-STYLE Use struct as a simple data container, if it needs a function it should be a class instead

## Data stored in a class
* Classes can store data of any type
* GOOGLE-STYLE All data must be private
* GOOGLE-STYLE Use `snake_case`_ with a
* trailing "_" for `private` data members
* Data should be **set in the Constructor**
* **Cleanup data in the Destructor** if needed

## Constructors and Destructor
* Classes always have **at least one Constructor** and **exactly one Destructor**
* Constructors crash course:
    * Are functions with no return type
    * Named exactly as the class
    * There can be many constructors
    * **If there is no explicit constructor an implicit default constructor will be generated**
* Destructor for class SomeClass:
    * Is a function named ~SomeClass()
    * Last function called in the lifetime of an object
    * Generated automatically if not explicitly defined

## Setting and getting data
* Use **initializer list** to initialize data
* Name getter functions as the private member they return
* Make getters const
* **Avoid setters**, set data in the constructor

## Const correctness
* `const` after function states that this function **does not change the object**
* Mark all functions that should not change the state of the object as `const`
* Ensures that we can pass objects by a `const` reference and still call their functions
* Substantially reduces number of errors

## Declaration and definition
* Data members belong to declaration
* Class methods can be defined elsewhere
* Class name becomes part of function name
```
 // Declare class.
class SomeClass {
public:
SomeClass ();
int var () const;
private:
void DoSmth ();
int var_ = 0;
};
 // Define all methods.
 SomeClass :: SomeClass () {}
 int SomeClass :: var () const {
```
## Always initialize members for classes
* C++11 allows to initialize variables in-place
*Do not initialize them in the constructor
* No need for an explicit default constructor
```
class Student {
public:
// No need for default constructor.
// Getters and functions omitted.
private:
int earned_points_ = 0;
float happiness_ = 1.0f;
};
*Note: Leave the members of structsuninitialized as defining them forbids using brace initialization
```
## Classes as modules
* Prefer encapsulating information that belongs together into a class
* **Separate declaration and definition** of the class into header and source files
* Typically, class `SomeClass` is declared in `some_class.h` and is defined in `some_class.cpp`