#include <stdio.h>

int main()
{
  int A[10]={2,4,6,8,10,12,14};

  for (int i=0;i<10;i++) {
    printf("%d\n", A[i]);
  }

  printf("%ld\n", sizeof(A));
  return 0;
}
