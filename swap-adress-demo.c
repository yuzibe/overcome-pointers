#include "stdc.h"

void swap_adress_main()
{
  int a = 5, b = 6;
  int * aptr = &a,* bptr = &b;
  printf("value of a is %d,adress of a is %x\n", a, &a);
  printf("value of b is %d,adress of b is %x\n", b, &b);
  swap_adress_function(&aptr, &bptr);
  printf("value of a is %d,adress of a is %x\n", *aptr, aptr);
  printf("value of b is %d,adress of b is %x\n", *bptr, bptr);
}

void swap_adress_function(int **a, int **b)
{
  int *c = *a;
  *a = *b;
  *b = c;
  return;
}
