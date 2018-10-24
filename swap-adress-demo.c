#include "stdc.h"

void swap_adress_main()
{
  int a = 5, b = 6;
  int * aptr = &a,* bptr = &b;
  printf("value of a is %d,adress of a is %o\n", a, &a);
  printf("value of b is %d,adress of b is %o\n", b, &b);
  swap_adress_function(&aptr, &bptr);
  printf("value of a is %d,adress of a is %o\n", a, &a);
  printf("value of b is %d,adress of b is %o\n", b, &b);
}

void swap_adress_function(int **p1, int **p2)
{
  int *c = *p1;
  *p1 = *p2;
  *p2 = c;
  return;
}
