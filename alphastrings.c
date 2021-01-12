#include <stdio.h>
#include <string.h>

int main()
{
  //creating two strings
  char string1[27];
  char string2[] = "abcdefghijklmnopqrstuvwxyz";
  //for loop string 1
  for(int i = 0; i < 26; i++)
  {
      string1[i] = 'a' + i;
  }
  string1[26] = '\0';

  //comparing both of the strings created
  if (strcmp(string1, string2) == 0) 
      printf("the first and second string are identical\n");
  else 
      printf("the two strings are not identical\n");

  //turning one of the strings into uppercase
  for (int i = 0; i < 26; i++)
  {
    string1[i] -= 32;
  }

  //comparing the updated string with old string
  if (strcmp(string1, string2) == 0) 
      printf("the updated first and second string are identical\n");
  else 
      printf("the updated strings are not identical\n");

  //making string 3 which combines the uppercase with lowercase
  char string3[54];
  strcpy(string3, string2);
  strcpy(string3, string1);

  //printing the strings together
  printf("String 1: %s\n String 2: %s\n String 3: %s\n", string1, string2, string3);

}
