#include "stdc.h"

// 模拟main环境
void swap_adress_main();
/**
 * @desc int aptr 和 bptr 的交换。
 * - 实现 a 和 b 地址交换，值同时交换。
 * @param (int*) p1 参数1的地址的地址
 * @param (int*) p2 参数2的地址的地址
 * @return void [打印地址，不返回参数]
 */
void swap_adress_function(int **a, int **b);

void swap_adress_main()
{
  int a = 5, b = 6;
  int *aptr = &a, *bptr = &b;
  printf("value of a is %d,adress of a is %x\n", a, (int)&a);
  printf("value of b is %d,adress of b is %x\n", b, (int)&b);
  swap_adress_function(&aptr, &bptr);
  printf("value of a is %d,adress of a is %x\n", (int)*aptr, (int)aptr);
  printf("value of b is %d,adress of b is %x\n", (int)*bptr, (int)bptr);
  return;
}

void swap_adress_function(int **a, int **b)
{
  int *c = *a;
  *a = *b;
  *b = c;
  return;
}
