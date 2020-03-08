// Typical const error
#include <iostream>
#include <string>

using namespace std;
class Student {
public:
  Student(string name) : name_{name} {}
  const string &name() { return name_; }

private:
  string name_;
};

void Print(const Student &student) {
  cout << "Student " << student.name() << endl;
  // Problem is that name in class is not marked as const so, that function does
  // not guarantee that object will not be changed
}