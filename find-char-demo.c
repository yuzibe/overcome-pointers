#include "stdc.h"

int find_char_1(char *str, char find);
int find_char_2(char **str, char find);


void find_char_main()
{
  char *str = "abcde12345\0";
  char find = '1';
  printf(("find char %c in %d\n"), find, find_char_1(str, find));
  // *str = "abcde12345\0";
  printf(("find char %c in %d\n"), find, find_char_2(&str, find));
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
  }
  return -1;
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
  }
  return -1;
}
