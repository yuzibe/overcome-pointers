#include "stdc.h"

// 模拟main环境
void swap_main();
/**
 * @desc int a 和 b 的交换。
 * - 实现 a 和 b 因参数传入发生内容交换。
 * @param (int*) p1 参数1的地址
 * @param (int*) p2 参数2的地址
 * @return (void) [打印地址，不返回参数]
 */
void swap_function(int *p1, int *p2);

void swap_main()
{
  int a = 3, b = 4;
  printf("value of a is %d,adress of a is %p\n", a, &a);
  printf("value of b is %d,adress of b is %p\n", b, &b);
  swap_function(&a, &b);
  printf("value of a is %d,adress of a is %p\n", a, &a);
  printf("value of b is %d,adress of b is %p\n", b, &b);
  return;
}

void swap_function(int *p1, int *p2)
{
  int c = *p1;
  *p1 = *p2;
  *p2 = c;
  return;
}
