/*
Functions
    1 ReturnType FuncName( ParamType1 in_1 , ParamType2 in_2) {
    2 // Some awesome code here.
    3 return return_value ;
    4 }

    Code can be organized into functions
    Functions create a scope
    Single return value from a function
    Any number of input variables of any types
    Should do only one thing and do it right
    Name must show what the function does
    GOOGLE-STYLE name functions in CamelCase
    GOOGLE-STYLE write small functions
*/
#include <iostream>

int Sum(int a, int b) {
    return a + b;
}

int main() {
    std::cout << Sum(1, 2) << std::endl;
    return 0;
}

/*
#include <iostream>

int Sum(int a, int b) {
    int sum = a + b
    return sum;         DON'T DO THIS EVER, IT FUCKS UP MEMORY BADLY
}

int main() {
    std::cout << Sum(1, 2) << std::endl;
    return 0;
}
*/