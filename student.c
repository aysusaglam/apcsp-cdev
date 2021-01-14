#include <stdio.h>
#include <string.h>


// student structure
//struct Student...

struct Student{
  char firstname[256];
  char lastname[256];
  int age;
  int studentid;
};

void printStudent(struct Student* student)
{
  printf("\nStudent: %s %s", student->firstname, student->lastname);
  printf("\nAge: %d", student->age);
  printf("\nId: %d", student->studentid);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each stuents
 for (int i = 0; i < num; i ++)
{
  printf("\n-----Student %d-----", i);
  printStudent(&students[i]);
}
}


int main()
{

  // an array of students
  //xxx students;
  
  struct Student students[100];
  char input[256];
  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
      printf("First name: ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &students[numStudents].firstname);
      
      printf("Last name: ");
      fgets(input, 256, stdin);
      sscanf(input, "%s", &students[numStudents].lastname);    
      
      printf("Age: ");
      fgets(input, 256, stdin);
      sscanf(input, "%d", &students[numStudents].age);     

      printf("Id: ");
      fgets(input, 256, stdin);
      sscanf(input, "%d", &students[numStudents].studentid);     
 numStudents++;

      
    }
  }
  
  printf("\nGoodbye!\n");
}
