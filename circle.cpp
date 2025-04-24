#include <iostream>
#include <string>
#include <array>
using namespace std;

class Circle {
  private:
  int radius = 10;
  public:
  Circle() {
  }
  Circle(int initialRadius) {
    this->setRadius(initialRadius);
  }
  int getRadius() {
    return this->radius;
  }
  void setRadius(int newRadius) {
    if (newRadius > 0)
      this->radius = newRadius;
  }
  friend std::ostream& operator<<(std::ostream& os, const Circle& obj) {
    os << "circle with radius " << obj.radius;
    return os;
  }
};
  
int main() {
  

  return 0;
}
