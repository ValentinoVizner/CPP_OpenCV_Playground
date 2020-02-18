/*
Any variable can be const
        Use const to declare a constant
        The compiler will guard it from any changes
        Keyword const can be used with any type
        GOOGLE-STYLE name constants in CamelCase starting with a small letter k:
            const float kImportantFloat = 20.0f;
            const int kSomeInt = 20;
            const std::string kHello = "hello";
        const is part of type:
            variable kSomeInt has type const int

        Tip: declare everything const unless it must be changed
*/

/*
References to variables
    We can create a reference to any variable
    Use & to state that a variable is a reference
        float& ref = original_variable;
        std::string& hello_ref = hello;
    Reference is part of type:   variable ref has type float&
    Whatever happens to a reference happens  to the variable and vice versa
    Yields performance gain as references avoid copying data
*/

/*
Const with references
    References are fast but reduce control
    To avoid unwanted changes use const
        const float& ref = original_variable;
        const std::string& hello_ref = hello;
*/

#include <iostream>

int main() {
    int num = 43;  // Name has to fit on slides
    int& ref = num;
    const int& kRef = num;
    ref = 0;
    std::cout << ref << " " << num << " " << kRef << std::endl;
    num = 42;
    std::cout << ref << " " << num << " " << kRef << std::endl;
    return 0;
}