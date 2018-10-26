#include "stdc.h"
#include "swap-funcation-demo.c"
#include "swap-adress-demo.c"
#include "find-char-demo.c"
#include "bitree-demo.c"
#include "callback-demo.c"
#include "qa.c"

/**
 * @desc int a 和 b 交换。
 * - 实现 a 和 b 只交换，地址不交换。
 * @return void [打印地址，不返回参数]
 */
void swap_demo();

void swap_demo()
{
    int a = 1, b = 2;
    int *aptr = &a, *bptr = &b;
    printf("value of a is %d,adress of a is %p\n", a, aptr);
    printf("value of b is %d,adress of b is %p\n", b, bptr);
    *aptr = 2;
    *bptr = 1; /*  */
    printf("value of a is %d,adress of a is %p\n", a, aptr);
    printf("value of b is %d,adress of b is %p\n", b, bptr);
    return;
}

int main()
{
    swap_demo();
    swap_main();
    swap_adress_main();
    find_char_main();
    bitree_main();
    callback_main();
    // 程序一闪而过在return语句打断点
    return 0;
}
