#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));

char b = 'b';

  // print value and size of a char variable
  printf("char b value: %c and size: %c bytes\n", b, sizeof(b));

float c = 12.345;

  // print value and size of a float variable
  printf("float c value: %f and size: %f bytes\n", c, sizeof(c));

double d = 123.456;

  // print value and size of a double variable
  printf("double d value: %f and size: %f bytes\n", d, sizeof(d));

unsigned int e  = 7;
  // print value and size of an unsigned int variable
  printf("unsigned int e value: %d and size: %d bytes\n", e, sizeof(e));

signed int f  = -7;
  // print value and size of an signed int variable
  printf("signed int f value: %d and size: %d bytes\n", f, sizeof(f));
}

