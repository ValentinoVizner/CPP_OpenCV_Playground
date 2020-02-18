#include <iostream>
#include <string>
#include <vector>

/*
Range for loop
    Iterating over a standard containers like array or vector has simpler syntax
    Avoid mistakes with indices
    Show intent with the syntax
    Has been added in C++11
        1 for (const auto& value : container) {
        2 // This happens for each value in the container.
*/

int main() {
    const int kIterCount = 10;
    std::vector<std::string> vec = {"Hello", "World"};

    // New way for going over every element of the list
    for (const auto& c : vec.front()) {
        std::cout << c << std::endl;
    }

    // Old way
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }
}