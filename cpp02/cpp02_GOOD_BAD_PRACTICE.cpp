#include <iostream>
#include <vector>

using namespace std;
vector<int> CreateVectorOfFullSquares(int size) {
    vector<int> result(size);  //Vector of size 'size'
    for (int i = 0; i < size; ++i) {
        result[i] = i * i;
    }
    return result;
}

int main() {
    auto squares = CreateVectorOfFullSquares(10);
    return 0;
}
/*
GOOD

Is small enough to see all the code at once
Name clearly states what the function does
Function does a single thing
*/

/*
vector<int> Func(int a, bool b) {
    if (b) {
        return vector<int>(10, a);
    }
    vector<int> vec(a);
    for (int i = 0; i < a; ++i) {
        vec[i] = a * i;
    }
    if (vec.size() > a * 2) {
        vec[a] /= 2.0f;
    }
    return vec;
}

BAD
Name of the function means nothing
Names of variables mean nothing
Function does not have a single purpose
*/