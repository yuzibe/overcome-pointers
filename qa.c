#include "stdc.h"

void qa001();

void qa001()
{
  char *info = "size:";
  puts(info);
  int size = 0;
  fflush(stdin);
  scanf("%d", &size);
  char **str = (char **)malloc(sizeof(char*) * size);
  char **strptr = str;
  fflush(stdin);
  for (int i = 0; i < size; i++)
  {
    *strptr = (char *)malloc(sizeof(char) * 100);
    scanf("%s", *(strptr++));
    fflush(stdin);
  }
  puts("--------------");
  fflush(stdin);
  for (int i = 0; i < size; i++)
  {
    printf("%s\n", *(str++));
  }
  return;
}
