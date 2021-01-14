#include <stdio.h>
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main

double areaOfCircle(float radius)
{
  double area;
  area = M_PI*radius*radius;

  return area;
}


int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  float start = 5.2;
  int reps = 3;
  
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end

  char input[256];
  float lower;
  float upper;


  printf("Input lower number ");
  fgets(input, 256, stdin);
  sscanf(input, "%f",&lower);
 
  if (lower<0)
{ 
  printf("\nInput a positive value for lower number ");
  fgets(input, 256, stdin);
  sscanf(input, "%f",&lower);
}
  printf("Input upper number ");
  fgets(input, 256, stdin);
  sscanf(input, "%f", &upper);
 if (upper<0)
{ 
  printf("\nInput a positive value for upper number ");
  fgets(input, 256, stdin);
  sscanf(input, "%f",&upper);
}
if (upper<lower)
{ 
  printf("\nInput a number greater than the lower value ");
  fgets(input, 256, stdin);
  sscanf(input, "%f",&upper);
} 
  double area;
  float radius = lower;
  while(radius<=upper)
{
  area = areaOfCircle(radius);
  printf("Area of  radius %f = %f\n", radius, area);
  radius = radius + 1;
 } 

}


