/*
Built-in types
    “Out of the box” types in C++:
        1 bool this_is_fun = false; // Boolean: true or false.
        2 char carret_return = '\n'; // Single character.
        3 int meaning_of_life = 42; // Integer number.
        4 short smaller_int = 42; // Short number.
        5 long bigger_int = 42; // Long number.
        6 float fraction = 0.01f; // Single precision float.
        7 double precise_num = 0.01; // Double precision float.
        8 auto some_int = 13; // Automatic type [int].
        9 auto some_float = 13.0f; // Automatic type [float].
        10 auto some_double = 13.0; // Automatic type [double].
    [Advanced] If curious read detailed info here:
    http://en.cppreference.com/w/cpp/language/types
*/
//IMPORTANT: Avoid == (double equal) for floating point types

/*
Strings
    concatonate strings with +
    Check if str is empty with str.empty()
    Works out of the box with I/O streams
*/

#include <iostream>
#include <string>

int main() {
    std::string hello = "Hello";
    std::cout << "Type your name: " << std::endl;
    std::string name = "";  // Init empty
    std::cin >> name;       // Read name
    std::cout << hello + ", " + name + "!" << std::endl;
    return 0;
}