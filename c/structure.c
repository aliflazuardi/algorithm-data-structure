#include <stdio.h>

struct Rectangle {
  int length;
  int breadth;
  char x[4];
};


int main() {
  struct Rectangle r1={10,5,"abcd"};

  printf("%ld\n", sizeof(r1));

  printf("%c\n", r1.x[0]);

  printf("Area: %d\n", r1.length * r1.breadth);

  return 0;
}
