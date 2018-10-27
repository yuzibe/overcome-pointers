#include "stdc.h"

typedef struct People{
  char * name;
  int age;
}People,*_People;

void __main__();
void setName(_People self,char * name);
void setOld(_People self,int old);
char * getName(_People self);
int getOld(_People self);

void object_main()
{
  People son9wx;
  setName(&son9wx,"songwx\0");
  setOld(&son9wx,18);
  printf("user name is %s\n",(&son9wx)->name);
  printf("user old is %d\n",(&son9wx)->age);
  return;
}

void setName(_People self,char * name)
{
  self->name = name;
  return;
}

void setOld(_People self,int age)
{
  self->age = age;
  return;
}

char * getName(_People self)
{
  return self->name;
}

int getOld(_People self)
{

  return self->age;
}
