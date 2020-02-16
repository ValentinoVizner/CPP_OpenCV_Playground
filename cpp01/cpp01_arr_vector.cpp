/*
Use std::array for fixed size collections of items

    #include <array> to use std::array
    Store a collection of items of same type
    Create from data:
        array<float, 3> arr = {1.0f, 2.0f, 3.0f};
    Access items with arr[i] indexing starts with 0
    Number of stored items: arr.size()
    Useful access aliases:
        First item: arr.front() == arr[0]
        Last item: arr.back() == arr[arr.size() - 1]
*/

/*
Use std::vector when number of items is unknown before-wise

    #include <vector> to use std::vector
    Vector is implemented as a dynamic table
    Access stored items just like in std::array
    Remove all elements: vec.clear()
    Add a new item in one of two ways:
        vec.emplace_back(value) [preferred, c++11]
        vec.push_back(value) [historically better known]
    Use it! It is fast and flexible!
    Consider it to be a default container to
    store collections of items of any same type
*/

/*
Optimize vector resizing
    Many push_back/emplace_back operations force vector to change its size many times
    reserve(n) ensures that the vector has enough memory to store n items
    The parameter n can even be approximate
    This is a very important optimization

        1 std::vector <std::string > vec;
        2 const int kIterNum = 100;
        3 // Always call reserve when you know the size.
        4 vec.reserve(kIterNum);
        5 for (int i = 0; i < kIterNum; ++i) {
        6 vec.emplace_back("hello");
        7 }
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1,
                           2,
                           3};
    vector<string> names = {"Igor", "Cyrill"};
    names.emplace_back("another string");
    cout << "First name: " << names.front() << endl;
    cout << "Last number: " << numbers.back() << endl;
    return 0;
}