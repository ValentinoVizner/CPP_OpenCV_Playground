#include <iostream>
#include <vector>
int main() {
    int num = 2;

    switch (num) {
        case 1:
            std::cout << "hello" << std::endl;
            break;
        case 2:
            std::cout << "world" << std::endl;
            break;
        default:
            std::cout << "You are doing it wrong!" << std::endl;
    }
}