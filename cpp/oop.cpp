#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle {
private:
  int length;
  int breadth;

public:
  // Default Constructor
  Rectangle() {
    length = 0;
    breadth = 0;
  }

  // Parameterized Constructor
  Rectangle(int l, int b) {
    length = l;
    breadth = b;
  }

  // methods
  int area() {
    return length * breadth;
  }

  int perimeter() {
    return 2 * (length+breadth);
  }

  // Setter
  void setLength(int l) {
    length = l;
  }

  void setBreadth(int b) {
    breadth = b;
  }

  // Getter
  int getLength() {
    return length;
  }

  int getBreadth() {
    return breadth;
  }

  // Destructor
  ~Rectangle() {
    // usually deallocate memory
    cout<<"Destructor"<<endl;
  }
};

int main() {
  Rectangle r(10,5);

  /* int l,b; */
  /* printf("Enter length and breadth\n"); */
  /* cin>>l>>b; */

  /* r.initialise(l, b); */

  int a = r.area();
  int peri = r.perimeter();

  printf("Area: %d\nPerimeter: %d\n", a, peri);

  return 0;
}
