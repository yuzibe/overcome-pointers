#include "stdc.h"
#define STR "abcde12345\0"

// 模拟main环境
void find_char_main();
/**
 * @desc 查找字符串中是否存在某个字符
 * - 不更改源字符串查找
 * @param (char *) str的地址 不可以在函数内发生改变
 * @param (char) find 待查找的字符
 * @return (int) 返回找到字符的地址
 */
int find_char_1(char *str, char find);
/**
 * @desc 查找字符串中是否存在某个字符
 * - 不更改源字符串查找
 * @param (char **) str的地址 可以在函数内发生改变
 * @param (char) find 待查找的字符
 * @return (int) 返回找到字符的地址
 */
int find_char_2(char **str, char find);

void find_char_main()
{
  char *str = STR;
  char find = '1';
  printf(("find char %c in %d\n"), find, find_char_1(str, find));
  printf(("find char %c in %d\n"), find, find_char_2(&str, find));
  str = STR;
  printf(("find char %c in %d\n"), find, find_char_2(&str, find));
  printf(("find char %c in %d\n"), find, find_char_1(str, find));
  return;
}

int find_char_1(char *str, char find)
{
  int res = -1;
  while (str++)
  {
    ++res;
    if ((*str) == find)
    {
      return res;
    }
    if ((*str) == '\0')
    {
      return -1;
    }
  }
  return -404;
}

int find_char_2(char **str, char find)
{
  int res = -1;
  while ((*str)++)
  {
    ++res;
    if ((**str) == find)
    {
      return res;
    }
    if ((*str) == '\0')
    {
      return -1;
    }
  }
  return -404;
}
