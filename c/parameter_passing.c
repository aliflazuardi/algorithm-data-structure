#include <stdio.h>

// Parameter passing by value
int add(int a, int b) {
  int c;
  c = a + b;
  a++;
  printf("a: %d\n", a);

  return c;
}

// Parameter passing by address
void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

// Parameter passing by reference (cpp only)
// void swap(int &x, int &y) {
//   int temp;
//   temp = x;
//   x = y;
//   y = temp;
// }

int main() {
  int num1=10, num2=15, sum;

  sum = add(num1,num2);
  printf("sum: %d\n", sum);
  printf("num1: %d\n", num1);

  swap(&num1, &num2);
  printf("num1: %d\n", num1);
  printf("num2: %d\n", num2);
  
  // using reference in cpp
  // swap(num1, num2);

  return 0;
}
