#include <stdio.h>
#include <string.h>

int main()
{

//lower case strings

char str1[27];
str1[0]='a';

char str2[27]="abcdefghijklmnopqrstuvwxyz";

for (int i = 1; i < 27; i ++)
{
  str1[i]=str1[i-1]+1;
  str1[26]='\0';
}

printf("\nThe first string is = %s", str1);
printf("\nThe second string is = %s", str2);

//lower case comparison

if (strcmp(str1,str2) == 0) 
  printf("\nThe strings are the same");
else
  printf("\nThe strings are not the same");

//upper case conversion

for (int i = 0; i < 27; i ++)
{
  str1[i]=str1[i]-32;
  str1[26]='\0';
}

if (strcmp(str1,str2) == 0) 
  printf("\nThe strings are the same");
else
  printf("\nThe strings are not the same");

//mix strings
char str3[53];
strcpy(str3,str1);
strcat(str3,str2);
printf("\nThe first string is = %s", str1);
printf("\nThe second string is = %s", str2);
printf("\nThe third string is = %s", str3);
}
