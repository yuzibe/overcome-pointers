#include "stdc.h"

/**
 * @desc 比较ab大小函数
 * @param (int) a 的值
 * @param (int) b 的值
 * @return (int) 返回大小关系
 */
int my_compare(int a, int b);
// 模拟main环境
void callback_main();
/**
 * @desc 查找数组中是否存在数值
 * @param (int *) arr的地址 不可以在函数内发生改变
 * @param (int) find 待查找的数值
 * @param int(my_compare)(int a, int b) 回调函数
 * @return (int) 返回找到字符的地址
 */
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
