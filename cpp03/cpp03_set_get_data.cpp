#include <string>
class Student {
public:
  Student(int id, std::string name)
      : id_{id}, name_{name} {} // This is initializer list
  int id() const { return id_; }
  const std::string &
  name() const // whatever you do after this const all private variables will be
               // interpreted as const
  {
    return name_;
  }

private:
  int id_;
  std::string name_;
};