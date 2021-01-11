#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

 //pointers:

  float d = 1;
  float e = 3.14;

  printf("The value of d is %f\n", d);
  printf("The address of d is %p\n", (void*)&d);
  printf("The value of e is %f\n", e);
  printf("The address of e is %p\n", (void*)&e);


  float* ptrtod = &d;
  float* ptrtoe = &e;
  float temp = e;
  float* ptrtotemp = &temp;
  e = *ptrtod;
  d = *ptrtotemp;

  printf("The new  value of d is %f\n", d);
  printf("The new value of e is %f\n", e);
}

