#include<stdio.h>

int main()
{
  int a = 545;
  char  c = 'a';
  int i = 7;
  float f = 12.345;
  double d = 123.456;
  unsigned int w  = 7;
  short int l  = 890;
  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("char c value: %c and size: %lu bytes\n", c, sizeof(c));
  printf("int i value: %d and size: %lu bytes\n", i, sizeof(i));
  printf("float f value: %f and size: %lu bytes\n", f, sizeof(f));
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));
  printf("int w value: %d and size: %lu bytes\n", w, sizeof(w));
  printf("int l value: %d and size: %lu bytes\n", l, sizeof(l));
}

