/*
Function overloading
Compiler infers a function from arguments
Cannot overload based on return type
Return type plays no role at all
GOOGLE-STYLE Avoid non-obvious overloads
*/
#include <iostream>
#include <string>

std::string Func(int num) {
    return "int";
}

std::string Func(const std::string& str) {
    return "string";
}

int main() {
    std::cout << Func(1) << std::endl;
    std::cout << Func("hello") << std::endl;
    return 0;
}