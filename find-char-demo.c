#include "stdc.h"
#define STR "abcde12345\0"

int find_char_1(char *str, char find);
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
