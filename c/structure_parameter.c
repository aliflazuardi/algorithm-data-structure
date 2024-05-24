#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
  int length;
  int breadth;
};

void fun(struct Rectangle r) {
  r.length = 15;
  printf("Length %d \nBreadth %d\n", r.length, r.breadth);
}

void fun_pointer(struct Rectangle *p) {
  p->length = 15;
  printf("Length %d \nBreadth %d\n", p->length, p->breadth);
}

struct Rectangle *fun_heap() {
  struct Rectangle *p;
  p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

  p->length = 7;
  p->breadth = 14;

  return p;
};

int main() {
  struct Rectangle r={10,5};
  fun(r);

  printf("Length %d \nBreadth %d\n", r.length, r.breadth);

  fun_pointer(&r);
  printf("Length %d \nBreadth %d\n", r.length, r.breadth);

  struct Rectangle *rect = fun_heap();
  printf("Length %d \nBreadth %d\n", rect->length, rect->breadth);

  return 0;
}
