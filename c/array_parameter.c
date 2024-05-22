#include <stdio.h>
#include <stdlib.h>

// void fun(int A[], int n) { // will works the same
void fun(int *A, int n) {
  printf("%ld\n", sizeof(A)/sizeof(int)); // print size of integer pointer / integer = 2

  A[0] = 15;

  for(int i=0;i<n;i++) {
    printf("%d\n", A[i]);
  }
}

int * createArray(int size) {
  int *p;
  p = malloc(sizeof(int)*size);

  for(int i = 0; i < size; i++) {
    p[i]=i+1;
  }

  return p;
}

int main() {
  int A[] = {2,4,6,8,10};
  int n = 5;

  printf("%ld\n", sizeof(A)/sizeof(int)); // print 5 (size of array)
  fun(A, n);

  int *ptr, sz=5;

  ptr = createArray(sz);

  for(int i = 0; i < sz; i++) {
    printf("%d\n", ptr[i]);
  }

  return 0;
}
