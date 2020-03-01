/*
Libraries
    Library: multiple object files that are logically connected
    Types of libraries:
        Static: faster, take a lot of space, become part of the end binary, named: lib*.a
        Dynamic: slower, can be copied, referenced by a program, named lib*.so
    Create a static library with
        ar rcs libname.a module.o module.o …
    Static libraries are just archives just like
        zip/tar/…
*/

/*
What is linking?
    The library is a binary object that contains the compiled implementation of some methods
    Linking maps a function declaration to its compiled implementation
    To use a library we need a header and the compiled library object
*/