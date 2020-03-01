
/*
Header / Source Separation
Move all declarations to header files (*.h)
Implementation goes to *.cpp or *.cc
*/

// some_file.h
Type SomeFunc(... args...);

// some_file.cpp
#include "some_file.h"
Type SomeFunc(... args...) { /* code */
}

// program.cpp
#include "some_file.h"
int main() {
    SomeFunc(/* args */);
    return 0;
}

/*
How to build HEADER?
    1 folder/
    2   --- tools.h
    3   --- tools.cpp
    4   --- main.cpp
Short: we separate the code into modules

Declaration: tools.h - #pragma once need to be in every .h file
    1 #pragma once // Ensure file is included only once, it is PREPROCESSOR COMMAND
    2 void MakeItSunny ();
    3 void MakeItRain ();
*/

/*
How to build CPP?

Definition: tools.cpp
    1 #include <iostream >
    2 #include "tools.h"
    3 void MakeItRain () {
        4 // important weather manipulation code
        5 std :: cout << "Here! Now it rains! Happy?\n";
6 }
7 void MakeItSunny () { std :: cerr << "Not available\n"; }

Calling: main.cpp
    1 #include "tools.h"
    2 int main () {
        3 MakeItRain ();
        4 MakeItSunny ();
        5 return 0;
6 }
*/

/*

*/