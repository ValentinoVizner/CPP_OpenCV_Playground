#include <string>
class Image {
public:
  Image(const std::string &file_name); // This is Constructor
  void Draw();

private:
  int rows_ = 0;
  int cols_ = 0;
};
// Implementation omitted here.
int main() {
  Image image("some_image.pgm");
  image.Draw();
  return 0;
}