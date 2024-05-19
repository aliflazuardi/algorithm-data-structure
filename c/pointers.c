#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
  int length;
  int breadth;
};

int main() {
  // int a = 10;

  // int A[5] = {2,4,6,8,10};
  // int *p;
  // p = A;
  //
  // for (int i = 0;i < 5;i++) {
  //   printf("value: %d\n", p[i]);
  // }


  int *p;
  p=(int *)malloc(5*sizeof(int));
  p[0] = 1;
  p[1] = 3;
  p[2] = 2;
  p[3] = 5;
  p[4] = 2;

  for (int i = 0;i < 5;i++) {
    printf("%d\n", p[i]);
  }
  free(p);

  int *p1;
  char *p2;
  float *p3;
  double *p4;
  struct Rectangle *p5;

  printf("%ld\n", sizeof(p1));
  printf("%ld\n", sizeof(p2));
  printf("%ld\n", sizeof(p3));
  printf("%ld\n", sizeof(p4));
  printf("%ld\n", sizeof(p5));

  struct Rectangle r = {5,10};

  printf("%d\n", r.length);

  struct Rectangle *pr = &r;

  (*pr).length = 10;
  printf("%d\n", r.length);

  pr->length = 15;
  printf("%d\n", r.length);

  struct Rectangle *prec;
  prec = (struct Rectangle *)malloc(sizeof(struct Rectangle));
  // prec = new Rectangle; this is cpp code

  prec->length = 17;
  prec->breadth = 34;
  printf("%d\n", prec->length);
  printf("%d\n", prec->breadth);

  return 0;
}
