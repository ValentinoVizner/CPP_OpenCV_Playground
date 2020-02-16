/*
Variables live in scopes
    There is a single global scope
    Local scopes start with { and ends with }
    All variables belong to the scope where
    they have been declared
    All variables die in the end of their scope
    This is the core of C++ memory system
*/

int main() {                              // Start of main scope
    float some_float = 13.13f;            // Create variable
    {                                     // New inner scope
        auto another_float = some_float;  // Copy variable
        // another_float dies.
    }
    return 0;
}