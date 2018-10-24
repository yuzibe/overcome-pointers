#include "stdc.h"

void swap_main()
{
  int a = 3, b = 4;
  printf("value of a is %d,adress of a is %o\n", a, &a);
  printf("value of b is %d,adress of b is %o\n", b, &b);
  swap_function(&a, &b);
  printf("value of a is %d,adress of a is %o\n", a, &a);
  printf("value of b is %d,adress of b is %o\n", b, &b);
  return;
}

void swap_function(int *p1, int *p2)
{
  int c = *p1;
  *p1 = *p2;
  *p2 = c;
  return;
}