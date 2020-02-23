/*
Default arguments
    Functions can accept default arguments
    Only set in declaration not in definition
    Pro: simplify function calls
    Cons:
        Evaluated upon every call
        Values are hidden in declaration
        Can lead to unexpected behavior when overused
    GOOGLE-STYLE Only use them when readability gets much better
*/

#include <iostream>
#include <string>

std::string SayHello(const std::string& to_whom = "world") {
    return "Hello " + to_whom + "!";
}

int main() {
    std::cout << SayHello() << std::endl;
    std::cout << SayHello("students") << std::endl;
    return 0;
}