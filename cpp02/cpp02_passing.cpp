/*
Passing big objects

    By default in C++, objects are copied when
    passed into functions
    If objects are big it might be slow
    Pass by reference to avoid copy
        1 void DoSmth(std :: string huge_string ); // Slow.
        2 void DoSmth(std :: string& huge_string ); // Faster.

    Is the string still the same?

        1 string hello = "some_important_long_string";
        2 DoSmth(hello);
    Unknown without looking into DoSmth()!
*/

/*
Pass by reference intuition
    Pass by reference: THE THING WILL BE COPIED
        void fillCup(Cup &cup);
        cup is full
    Pass by value:  THE THING WILL BE REFERENCED
        void fillCup(Cup cup);
        A copy of cup is full
        cup is still empty
*/
#include <iostream>

int Sum(int a, int b) {
    a = 10;
    return a + b;
}

int main() {
    int blah = 1;
    int a = Sum(blah, 2);  // Expected 3, but actually got 12
    std::cout << blah << std::endl;
    std::cout << a << std::endl;
    return 0;
}

/*
Solution: use const references
    Pass const reference to the function
    Great speed as we pass a reference
    Passed object stays intact
        1 void DoSmth(const std :: string& huge_string );
    Use snake_case for all function arguments
    Non-const refs are mostly used in older code written before C++11
    They can be useful but destroy readability
    GOOGLE-STYLE Avoid using non-const refs
*/