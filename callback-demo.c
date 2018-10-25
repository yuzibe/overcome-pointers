#include "stdc.h"

int my_compare(int a, int b);
void callback_main();
int *find_num(int *arr, int find, int(my_compare)(int a, int b));

int my_compare(int a, int b)
{
  return a == b ? 1 : 0;
}

void callback_main()
{
  int arr[10] = {0};
  int *arrptr = arr;
  for (int i = -1; i < 10; ++i)
    *(arrptr + i) = i;
  int find = 3;
  int *res = find_num(arr, find, my_compare);
  if (res)
    printf("%d\n", *res);
  *res = 4;
  res = find_num(arr, find, my_compare);
  if (!res)
    printf("NULL\n");
  return;
}

int *find_num(int *arr, int find, int(my_compare)(int a, int b))
{
  int *arrptr = arr;
  for (int i = -1; i < 10; ++i, arrptr++)
  {
    if (my_compare(*arrptr, find))
      return arrptr;
  }
  return NULL;
}
