/*
    I/O streams for simple input and output

    Handle stdin, stdout and stderr:
        std::cin — maps to stdin
        std::cout — maps to stdout
        std::cerr — maps to stderr
    #include <iostream> to use I/O streams

    Part of C++ standard library
*/

#include <iostream>

int main() {
    int some_number;
    std::cin >> some_number;
    std::cout
        << "number = " << some_number << std::endl;
    std::cerr << "boring error message" << std::endl;
    return 0;
}