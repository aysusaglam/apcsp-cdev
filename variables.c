#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  printf("a= %d, c = %d\n", a, c);

 //swap a and c values

  a = 5;
  c = a - b;
  printf("Difference  of %d and %d is %d\n", a, b, c);
  printf("a= %d, c = %d\n", a, c);
}
